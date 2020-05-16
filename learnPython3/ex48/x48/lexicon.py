
def scan(phrase):

    #phrase = input("> ")
    
    #NOTE: how do you test for user input?
    words = phrase.split()

    direction = ["north", "south", "east", "west", "down", "up", "left", "right", "back"]
    verb = ["go", "stop", "kill", "eat"]
    stop = ["the", "in", "of", "from","at", "it"]
    nouns = ["door", "bear", "princess", "cabinet"]
    #numbers = [123456789]
    # This will hold the tuples with type and word in it
    sentence = []

    #print(words)
    # Iterates through words, so we can have one object to deal with
    for i in range(len(words)):
        #print(words[i])
        # if this specific object is in the list direction then append the type and word[i] to sentence as a tuple
        if words[i] in direction:
            sentence.append(("direction", words[i]))
        elif words[i] in verb:
            sentence.append(("verb", words[i]))
        elif words[i] in stop:
            sentence.append(("stop", words[i]))
        elif words[i] in nouns:
            sentence.append(("noun", words[i]))
        # if nothing else is True,then is the word[i] a digit? if True then convert word[i] to and int
        elif (words[i]).isdigit():
            try:
                num = int(words[i])
                #print(num)
                sentence.append(("number", num))
                #print("printing from numbers")
            except ValueError:
                None
        else:
            sentence.append(("error", words[i]))
    return sentence


