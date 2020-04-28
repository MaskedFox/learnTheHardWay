# prompts "how old re you?" waits for input and stores it in age. the rest follow the same format
age = input("How old are you? ")
height = input("How tall are you? ")
weight = input("How much do you weigh? ")
# prints string with stored age, height, weight
print(f"So, you're {age} old, {height} tall and {weight} heavy.")

# Read open, os and sys. I couldn't find file =s so i read it from docs online
# POSIX? SUS?
# POSIX = Portable Operating Systems interface
## Defines API and other interfaces
## File Descriptors?
### 0 stdin
### 1 stdout
### 2 stderr
## open is used to assign a file descriptor to a file. close removes this association
## POSIX can also read and write metadata.
# SUS = Single Unix Specification
