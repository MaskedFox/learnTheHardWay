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


# This is my own little Class

class Human(object):

    def __init__(self, name):
        self.name = name
    
    def speak(self):
        print(f"Hello {self.name}")
    
    def eat(self):
        print("Im hungry...")
    
    def wake(self):
        print (f"{self.name} you invoked me and woke me up!")
        print("Meh")

Alex = Human('Alex')
Alex.speak()
Alex.wake()
Alex.eat()
