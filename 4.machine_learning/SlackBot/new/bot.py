from flask.wrappers import Response
import slack
import os
from pathlib import Path
from dotenv import load_dotenv
from flask import Flask, request, Response
from slackeventsapi import SlackEventAdapter
import string
from datetime import datetime, timedelta
from scrape import Scraber
# import scrape
import time

env_path = Path(".") / ".env"
load_dotenv(dotenv_path=env_path)


client = slack.WebClient(token=os.environ["SLACK_TOKEN_"])
BOT_ID = client.api_call("auth.test")['user_id']
channel_id = 'C02B4JKSC6T'

def tts_test(text, out_path):
    url = 'http://192.168.1.233:9345/tts/vits'
    input_text = f"input_text='{text}'"
    os.system(f"curl --location --request POST {url} --form {input_text} --output {out_path}")

def schedule_messages():
    messages = Scraber.scrape_bdnews24()

    for idx, msg in enumerate(messages[:5]):
        audio_path = f'outputs/audio_{idx + 1}.wav'
        tts_test(msg, audio_path)
        time.sleep(0.1)
        result = client.files_upload(channels=channel_id, initial_comment=msg, file=audio_path)

if __name__ == "__main__":
    schedule_messages()