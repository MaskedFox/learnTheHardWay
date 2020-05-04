print("""You enter a dark room with two doors.
Do you go through door #1 or door #2?""")
# waiting on user input with "> "
door = input("> ")
# if door is 1, then its True and will do all indented items. If its not True, it will go to line 22, which is elif:
if door == "1":
    print("there's a giant bear there eating a cheese cake.")
    print("What do you do?")
    print("1. Take the cake.")
    print("2. Scream at the bear.")

    bear = input("> ")
    # If bear is 1, then its True and it will print the below, otherwise it will go to line 16 and if that's not True either then it will go to line 18
    if bear == "1":
        print("The bear eats your face off. Good job!")
    elif bear == "2":
        print("The bear eats your legs off. Good job!")
    else:
        print(f"Well, doing {bear} is probably better.")
        print("Bear runs away.")
#  if door is 2, then its True and will do all indented items. If its not True, it will go to line 36, which is  else:
elif door == "2":
    print("You stare into the endless abyss at Cthulhu's retina.")
    print("1. Blueberries.")
    print("2. Yellow jacket clothespins.")
    print("3. Understanding revolvers yelling melodies.")

    insanity = input("> ")
# If insanity is 1, then its True and it will print the below, otherwise it will go to line 33.
    if insanity == "1" or insanity == "2":
        print("Your body survives powered by a mind of jello.")
        print("Good job!")
    else:
        print("The insanity rots your eyes into a pool of muck.")
        print("Good job!")
# if none of the above in lines 6 and 22 were True then we print the below:
else:
    print("You stumble around and fall on a knife and die. Good job!")




