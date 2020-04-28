# import arv from module sys
from sys import argv
# Set the two variables script and filename as command line arguments
script, filename = argv
# Opens the file we give it, hopefully some *.txt and stores it in txt for later use
txt = open(filename)
# prints the string which cantains the name of the file we previous give it as argument
print(f"Here's your file {filename}:")
# its prints the contents of the txt file we gave it as an argument
"""
print(txt.read())

print("Type the filename again:")
# prompts > and waits for input to be store in file_again
"""
file_again = input("> ")
# Opens the content of file_again, which if we gave it the same file, it should open the same file again and store it in txt_again
txt_again = open(file_again)
# prints the contents of txt_again, which should be the same as txt above
print(txt_again.read())

# He forgot to tell you, you need the quotes
"""
>>> bar = open(ex15_sample.txt)
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
NameError: name 'ex15_sample' is not defined
>>> bar = open("ex15_sample.txt")
>>> bar.read()
'\nThis is stuff I typed into a file. It is really cool stuff.\nLots and lots of fun to have in here.\n'
>>>
"""