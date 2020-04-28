# imports argv from sys module
from sys import argv
# read the WYSS section for how to run this
# sets the following to be command line arguments, it needs four command line arg
script, first, second, third = argv
# Prints the first arg
print("The script is called:", script)
# Prints the second arg, the rest follow the same idea.
print("Your first variable is:", first)
print("Your second variable is:", second)
print("Your third variable is:", third)
# After the program gets all the required args it will prompt the below and wait for input from user
bar = input("write anything, hit enter: ")
print(bar)

# Argv input through command line
# input() input thorugh program, while script is running

