# prints "How old are you" with one space together with the input of age. the rest follow the same idea
print("How old are you?", end=" ")
age = input()
print("How tall are you?", end=" ")
height = input()
print("How much do you weigh?", end=" ")
weight = input()
# Prints strings using format f for age, height and weight
print(f"So, you're {age} old, {height} tall and {weight} heavy.")

# The input() method reads a line from input, converts into a string and returns it.
# The input() method reads a line from input (usually user), converts the line into a string by removing the trailing newline, and returns it.

# If EOF is read, it raises an EOFError exception.

age = input("How old are you?")
print(age)
