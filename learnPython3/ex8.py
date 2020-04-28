# setting four empty spaces or inputs we use them later
formatter ="{} {} {} {}"
# Printing formatter with four ints for each bracket
print(formatter.format(1, 2, 3, 4))
# Printing formatter with four strings for each bracket
print(formatter.format("one", "two","three", "four"))
# Printing formatter with four booleans for each bracket
print(formatter.format(True, False, False, True))
print(formatter.format(formatter, formatter, formatter, formatter))
# Printing formatter with my own strings separated with commas, this is the same as a one liner.
print(formatter.format(
    "Try your",
    "Own text here",
    "Maybe a poem",
    "Or a song about fear"
))
