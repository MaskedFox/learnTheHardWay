class Parent(object):
    
    def override(self):
        print("PARENT override()")

    def implicit(self):
        print("PARENT implicit()")

    def altered(self):
        print("PARENT altered()")

class Child(Parent):

    def override(self):
        print("CHILD override()")
    
    def altered(self):
        print("CHILD, BEFORE PARENT altered()")
        # uses class Parent altered function, which should print "PARENT altered"
        super(Child, self).altered()
        print("CHILD, AFTER PARENT altered()")

dad = Parent()
son = Child()

dad.implicit()
# Child doesn't have a method implicit, so its inherits from Parent
son.implicit()

dad.override()
son.override()

dad.altered()
son.altered()
