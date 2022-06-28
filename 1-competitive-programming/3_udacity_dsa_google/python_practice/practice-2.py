# Write a function called "show_excitement" where the string
# "I am super excited for this course!" is returned exactly
# 5 times, where each sentence is separated by a single space.
# Return the string with "return".
# You can only have the string once in your code.
# Don't just copy/paste it 5 times into a single variable!


def show_excitement(message):
    # Your code goes here!
    excited_message = (message + '\n') * 5
    return excited_message

print(show_excitement("I am super excited for this course!"))