i = 0
numbers = []

while i < 6:
    print(f"At the top i is {i}")
    # we append or add i to numbers for later use
    numbers.append(i)
    # We increment i by 1 so in each loop the number increases until it reaches 6, once it reaches 6 the program stops execution of the loop
    i = i + 1
    print("Numbers now: ", numbers)
    print(f"At the bottom i is {i}")

print("the numbers: ")
# prints all the numbers accumulated in the while loop, should  print 0, 1, 2, 3, 4, 5
for num in numbers:
    print(num)
