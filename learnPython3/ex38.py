ten_things = "Apples Oranges Crows Telephone Light Sugar"
print("Wait there are not 10 things in that list. Let's fix that.")

stuff = ten_things.split(" ")
more_stuff = ["Day","Night", "Song", "Frisbee", "Corn", "Banana", "Girl", "Boy"]
# in this While statement we are getting the lenght of stuff and if stuff is not equal to 10
# Then we take the last object from more_stuff and return it to next_one
# then we append next_one to stuff, this increases the lenght at the while statement until it reaches 10
while len(stuff) != 10:
    # pop(more_stuff) <- def more confusing than explaining that its popping the last object of the list (returning it and deleting it from list)
    next_one = more_stuff.pop()
    print("Adding: ", next_one)
    # append(stuff, next_one)
    stuff.append(next_one)
    print(f"There are {len(stuff)} items now.")

print("There we go: ", stuff)

print("Let's do some things with stuff")

print("Let's do some things with stuff.")

print(stuff[1])
print(stuff[-1]) # whoa! fancy
# pop(stuff)
print(stuff.pop())
# " ".join(stuff)
print(" ".join(stuff)) # what? Cool!
# " ".join(stuff[3:5])
print("#".join(stuff[3:5])) # super stellar!
