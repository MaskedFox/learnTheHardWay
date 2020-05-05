from sys import exit

def gold_room():
    """
    This function will prompt the user with options, the only winning option is anything less than 50
    Warning, you can break this game by giving it a weird input such as "50ff"
    This should be fix prompting the user with int(input())
    """
    print("This room is full of gold. How much do you take?")
    # RE doing the below
    #choice = input("> ")
    #if "0" in choice or "1" in choice:
    #    how_much = int(choice)
    #else:
    #    dead("Man, learn to type a number")
    try:
        choice = int(input("> "))
    except:
        raise ValueError("Man, learn to type a number ")
    if choice < 50:
            print("Nice, you 're not greedy, you win!")
            exit(0)
    else:
        dead("You greedy bastard!")

def bear_room():
    """
    This function will prompt you with different choices, only one option will take to the gold room
    The other options will bring the game to an end or else will just prompt you again for you to choose a different option
    """
    print('There is a bear here.')
    print("The bear has a bunch of honey.")
    print("The fat bear is in front of another door.")
    print("How are you going to move the bear?")
    # Making the prompt better
    print(" your choices are: \"take honey\", \"taunt bear\" or \"open door\".")
    bear_moved = False

    while True:
        choice = str(input("> "))

        if choice == "take honey":
            dead("The bear looks at you then slaps your face off.")
        elif choice == "taunt bear" and not bear_moved:
            print("The bear has moved from the door.")
            print("You can go through it now.")
            bear_moved = True
        elif choice == "taunt bear" and bear_moved:
            dead("the bear gets pissed off and chews your leg off.")
        elif choice == "open door" and bear_moved:
            gold_room()
        else:
            print("I got no idea what that means.")

def cthulhu_room():
    """
    This function prompts the user with an input and depending on the users choice it will call another function.
    The only option for the game not to end is "flee" which starts the game again,giving you another opportunity not to choose this
    """
    print("Here you see the great evil Cthulhu.")
    print("He, it , whatever stares at you and you go insane.")
    print("Do you flee for your life or eat your head?")

    choice = str(input("> "))

    if "flee" in choice:
        start()
    elif "head" in choice:
        dead("Well that was tasty!")
    else:
        cthulhu_room()

def dead(why):
    """
    This function prints the arg plus "Good job" and kills the game with function exit() and arg 0
    Arguments:
        why {Could be anything at this point} -- [brings the arg and prints it]
    """
    print(why, "Good job!")
    exit(0)

def start():
    """
    Starts the game, prompts for an input, either left or right, which calls the function under each choice.
    if the user chooses anything other than left or right it will call the function dead and the game will be over.
    """
    print("You are in a dark room.")
    print('There is a door to your right and left.')
    print("Which one do you take?")

    choice = str(input("> "))

    if choice == "left":
        bear_room()
    elif choice == "right":
        cthulhu_room()
    else:
        dead("You stumble around the room until you starve")

# Calls function start, which starts the game
start()