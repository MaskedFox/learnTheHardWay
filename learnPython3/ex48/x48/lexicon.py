
def scan(phrase):
    
    words = phrase.split()



    direction = ["north", "south", "east", "west", "down", "up", "left", "right", "back"]
    verb = ["go", "stop", "kill", "eat"]
    stop = ["the", "in", "of", "from","at", "it"]
    nouns = ["door", "bear", "princess", "cabinet"]
    numbers = [123456789]
    sentence = []

    #print(words)

    for i in range(len(words)):
        #print(words[i])
        if words[i] in direction:
            sentence.append(("direction", words[i]))
        elif words[i] in verb:
            sentence.append(("verb", words[i]))
        elif words[i] in stop:
            sentence.append(("stop", words[i]))
        elif words[i] in nouns:
            sentence.append(("noun", words[i]))
        try:
            num = int(words[i])
            sentence.append(("number", num))
            #print("printing from numbers")
        except ValueError:
            None
        else:
            sentence.append(("error", words[i]))

    return sentence


