# importing package argv from sys
from sys import argv
# setting two command line arg
script, filename = argv
# printing the filename you gave it
print(f"We're going to erase {filename}.")
print("If you don't want that, hit CTRL-C (^C).")
print("If you do want that, hit RETURN.")
# prompting ? for input, waiting on input
input("?")

print("Opening the file...")
# opens the file you gave it with "w" for Write and stores it in target
target = open(filename, "w")
print("truncating the file. Goodbye!")
# the function acts per its name to the var target
target.truncate()

print("Now I'm going to ask youfor three lines.")
# the next three lines prompts for input and individually ask for input 3 times to then store it in line1/2/3
line1 = input("line 1: ")
line2 = input("line 2: ")
line3 = input("line 3: ")

print("I'm going to write these to the file.\n")
# Writing the contentents of line1 into the var target. The rest follow the same approach
target.write(line1)
target.write("\n")
target.write(line2)
target.write("\n")
target.write(line3)
target.write("\n")

target = open("ex15_sample.txt")
print(target.read())


print("And finally, we close it.")
# Closes the var target, initially we used open()
target.close()

