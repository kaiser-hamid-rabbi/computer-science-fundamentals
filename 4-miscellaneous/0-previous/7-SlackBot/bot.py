from flask.wrappers import Response
import slack
import os
from pathlib import Path
from dotenv import load_dotenv
from flask import Flask, request, Response
from slackeventsapi import SlackEventAdapter
import string
from datetime import datetime, timedelta
# import pprint

# printer = pprint.PrettyPrinter()

env_path = Path(".") / ".env"
load_dotenv(dotenv_path=env_path)

app = Flask(__name__)
slack_event_adapter = SlackEventAdapter(os.environ["SIGNING_SECRET_"],'/slack/events',app)

client = slack.WebClient(token=os.environ["SLACK_TOKEN_"])
BOT_ID = client.api_call("auth.test")['user_id']

message_counts = {}
welcome_messages = {}

BAD_WORDS = ['hell no', 'rubbish', 'shit']

SCHEDULED_MESSAGES = [
    {'text': 'First message', 'post_at': (
        datetime.now() + timedelta(seconds=20)).timestamp(), 'channel': 'C02AQ05SYBG'},
    {'text': 'Second Message!', 'post_at': (
        datetime.now() + timedelta(seconds=30)).timestamp(), 'channel': 'C02AQ05SYBG'}
]

class WelcomeMessage:
    START_TEXT = {
        'type': 'section',
        'text': {
            'type': 'mrkdwn',
            'text': (
                "*Welcome to your _App's Home_* :tada:"
            )
        }
    }
    ENDING_TEXT = {
        'type': 'section',
        'text': {
            'type': 'mrkdwn',
            'text': (
                "This button won't do much for now but you can set up a listener for it using the `actions()` method and passing its unique `action_id`. See an example in the `examples` folder within your flask app."
            )
        }
    }
    BUTTON_TEXT = {
        "type": "actions",
        "elements": [
            {
                "type": "button",
                "text": {
                "type": "plain_text",
                "text": "Click me!"
            }
        }
    ]
    }
    DIVIDER = {'type': 'divider'}
    def __init__(self, channel, user):
        self.channel = channel
        self.user = user
        self.username = "Custom-Slackbot"
        self.icon_emoji = ':robot_face:'
        self.timestamp = ''
        self.as_user = False
        self.completed = False
    def get_message(self):
        return {
            'ts': self.timestamp,
            'channel': self.channel,
            'username': self.username,
            'icon_emoji': self.icon_emoji,
            'blocks': [
                self.START_TEXT,
                self.DIVIDER,
                self.ENDING_TEXT,
                self.BUTTON_TEXT,
                self._get_reaction_task()
            ]
        }
    def _get_reaction_task(self):
        checkmark = ':white_check_mark:'
        if not self.completed:
            checkmark = ':white_large_square:'
        text = f'{checkmark} * React to this message!*'
        return {'type': 'section', 'text': {'type': 'mrkdwn', 'text': text}}

def send_welcome_message(channel, user):
    if channel not in welcome_messages:
        welcome_messages[channel] = {}
    if user in welcome_messages[channel]:
        return
    welcome = WelcomeMessage(channel, user)
    message = welcome.get_message()
    response = client.chat_postMessage(**message)
    welcome.timestamp = response['ts']

    welcome_messages[channel][user] = welcome

def list_scheduled_messages(channel):
    response = client.chat_scheduledMessages_list(channel=channel)
    # print(response.data)
    messages = response.data.get('scheduled_messages')
    ids = []
    for msg in messages:
        ids.append(msg.get('id'))

    return ids


def schedule_messages(messages):
    ids = []
    for msg in messages:
        # print(msg)
        response = client.chat_scheduleMessage(
            channel=msg['channel'], text=msg['text'], post_at=int(msg['post_at'])).data
        # printer.pprint(response.data)
        id_ = response.get('scheduled_message_id')
        ids.append(id_)

    return ids

def delete_scheduled_messages(ids, channel):
    for _id in ids:
        try:
            client.chat_deleteScheduledMessage(
                channel=channel, scheduled_message_id=_id)
        except Exception as e:
            print(e)

def check_if_bad_words(message):
    msg = message.lower()
    msg = msg.translate(str.maketrans('', '', string.punctuation))

    return any(word in msg for word in BAD_WORDS)

@slack_event_adapter.on('message')
def message(payload):
    # print(payload)
    event = payload.get('event', {})
    channel_id = event.get('channel')
    user_id = event.get('user')
    text = event.get('text')

    if user_id != None and BOT_ID != user_id:
        if user_id in message_counts:
            message_counts[user_id] += 1
        else:
            message_counts[user_id] = 1

        if text.lower() == 'start':
            send_welcome_message(f'@{user_id}', user_id)
        elif check_if_bad_words(text):
            ts = event.get('ts')
            client.chat_postMessage(channel=channel_id, thread_ts=ts, text="THIS IS A BAD WORD!")
            # client.chat_delete(channel=channel_id, ts=ts) # you need enterprise level access to do that!

        # client.chat_postMessage(channel=channel_id, text=text)

@slack_event_adapter.on('reaction_added')
def reaction(payload):
    event = payload.get('event', {})
    channel_id = event.get('item', {}).get('channel')
    user_id = event.get('user')

    if f'@{user_id}' not in welcome_messages:
        return
    welcome = welcome_messages[f'@{user_id}'][user_id]
    welcome.completed = True
    welcome.channel = channel_id
    message = welcome.get_message()
    updated_message = client.chat_update(**message)
    welcome.timestamp = updated_message['ts']

@app.route('/message-count', methods=['POST'])
def message_count():
    data = request.form
    user_id = data.get('user_id')
    user_name = data.get('user_name')
    channel_id = data.get('channel_id')
    message_count = message_counts.get(user_id, 0)
    client.chat_postMessage(channel=channel_id, text=f"Number of messages posted by {user_name} = {message_count} time(s)")
    # print(data)
    return Response(), 200

if __name__ == "__main__":
    schedule_messages(SCHEDULED_MESSAGES)
    ids = list_scheduled_messages('C02AQ05SYBG')
    delete_scheduled_messages(ids, 'C02AQ05SYBG')
    app.run(debug=True)