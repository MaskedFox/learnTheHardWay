# this goes in mystuff.py
"""
def apple():
    print("I AM APPLES!")

# this is just a variable
tangerine = "Living reflection of a dream"
"""

class MyStuff(object):

    def __init__(self):
        self.tangerine = "And now a thousand years between"

    def apple(self):
        print("I AM CLASSY APPLES!")

thing = MyStuff()
thing.apple()
print(thing.tangerine)
