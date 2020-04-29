# defining a function that takes two arguments
def cheese_and_crackers(cheese_count, boxes_of_crackers):
    print(f"You have {cheese_count} chesses!")
    print(f"You have {boxes_of_crackers} boxes of crackers!")
    print("Man that's enough for a party!")
    print("Get a blanket.\n")



print("We can just give the function numbers directly:")
# Calling funciton with argumetns 20 and 30
cheese_and_crackers(20,30)

print("OR, we can use variables from our script:")
amount_of_cheese = 10
amount_of_crackers = 50
# Calling function with two args in this case two different variables
cheese_and_crackers(amount_of_cheese, amount_of_crackers)


print("We can even do math inside too:")
# Calling function and doing some math per argument, you can tell because they are separated byt the comma
cheese_and_crackers(10 + 20, 5 + 6)


print("And we can combine the two, variables and math:")
# Calling function doing some math combining variable and int separated with a comman from the other argument
cheese_and_crackers(amount_of_cheese + 100, amount_of_crackers + 1000)
# Defining function cheeseburgers that takes two arguments
def cheeseburgers(cheese, burgers):
    print(f"{cheese} slides of Cheese? Wow buddy! that's a lot of cheese!")
    print(f"{burgers} Cheeseburgers If you keep it up you ll smell like it\n")
# Calling functions with two arguments, the first one is a variable and the second one is the int 2
cheeseburgers(amount_of_cheese, 2)
# Calling two arguments the first one is multiplying itself and the second one is an int 4
cheeseburgers(amount_of_cheese * amount_of_cheese, 4)