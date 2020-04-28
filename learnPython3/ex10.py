# Setting variable with a string that start with \t for tabbed
tabby_cat = "\tI'm tabbed in."
persian_cat = "I'm split\non a line."
backslash_cat = "I'm \\ a \\ cat."
# setting strings the ones with \t* will print a tabbed line follow by * After Catnip will print the same, but right after it will leave an empty space and tabbed *Grass
fat_cat = '''
I'll do a list:
\t* Cat food
\t* Fishies
\t* Catnip\n\t* Grass
''' #typo again forgot the \
# prints tabbed tabby_cat, tabby_cat already contains another \t for tabbed
print("\t", tabby_cat)
print(persian_cat, "\n")
print("\n", backslash_cat)
print(fat_cat)


#TODO: Escape Sequence \r CR Carriage return? Need to google it
# print('Python is included in CodeSpeedy\r123456')
# 123456 is included in CodeSpeedy