# importing argv from sys
from sys import argv
# setting three args, originally it was only two, but study drill said to add one
script, user_name, age = argv
prompt = "#"
# Printing strings using format f and getting information from var user_name, script
print(f"Hi {user_name}, I'm the {script} script.")
print("I'd like to ask you a few questions.")
print(f"Do you like me {user_name}?")
# Prompting the user with prompt or >/# as we set it before, then storing the input it in likes
likes = input(prompt)
# Same as above but this time we are storing the input in lives
print(f"Where do you live {user_name}?")
lives = input(prompt)
# Same as above but this time we are storing the input in computer
print("What kind of computer do you have?")
computer = input(prompt)
# printing strings and using format f with """ to print in several lines using vars likes, lives, computer, age
print(f"""
Alright, so you said {likes} about liking me.
You live in {lives}. Not sure where that is.
And you have a {computer} computer. Nice.
you are {age} years old. Excellent!
""")
