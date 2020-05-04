people = 30
cars = 40
trucks = 15
# if the statement is TRUE, it should print "We should take the cars", in this case it is on both ends cars is bigger than people and trucks is minor than cars

if cars > people or trucks < cars:
    print("We should take the cars ")
# if the above is not True then it would check this statement, if it is True it will print
elif cars < people:
    print("We should not take the cars.")
# if none of the statements above are True, then it would print here
else:
    print("We can't decide.")
# if the first part is True, then the second part needs to be true for it to print"that's too many trucks"
if trucks > cars and cars > people:
    print("that's too many trucks.")
elif trucks < cars:
    print("Maybe we could take the trucks")
else:
    print("We still can't decide.")
# In this last case one or the other needs to be true for it to print "Alright, let's just take the trucks" If its not True then it would go to Else: do that
if people > trucks or not(trucks > cars):
    print("Alright, let's just take the trucks.")
else:
    print("Fine, let's stay then.")

