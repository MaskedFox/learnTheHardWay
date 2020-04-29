from sys import argv

script, input_file = argv
# Function takes one arg and prints all the contents within the file
def print_all(f):
    print(f.read())
# Function that takes one arg and goes back to the beggining of first line, this is due to seek(0(position))
def rewind(f):
    f.seek(0)
# This functions prints the entire line, due to readline()
def print_a_line(line_count, f):
    print(line_count, f.readline())

current_file = open(input_file)

print("First let's print the whole file:\n")

print_all(current_file)

print("Now let's rewind, kind of like a tape.")
# Calls the function rewind
rewind(current_file)

print("Let's print three lines:")
# adds 1 to the beggining of the entire line
current_line = 1
print_a_line(current_line, current_file)
# adds +1 to the current_line, which in this specific case makes it 2
current_line = current_line + 1
print_a_line(current_line, current_file)
# Same as above, which in this specific case makes 3
current_line = current_line + 1
print_a_line(current_line, current_file)

