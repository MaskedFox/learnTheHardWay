print("How old are you?", end=" ")
age = input()
print("How tall are you?", end=" ")
height = input()
print("How much do you weigh?", end=" ")
weight = input()

print(f"So, you're {age} old, {height} tall and {weight} heavy.")

# The input() method reads a line from input, converts into a string and returns it.
# The input() method reads a line from input (usually user), converts the line into a string by removing the trailing newline, and returns it.

# If EOF is read, it raises an EOFError exception.

age = input("How old are you?")
print(age)
