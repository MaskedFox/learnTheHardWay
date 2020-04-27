# Initiating cars variable with an int 100
cars = 100
# Initiating space_in_a_car variable with a float 4.0
space_in_a_car = 4.0
# Initiating variable drivers with int 30
drivers = 30
# Initiating variable passengers with int 90
passengers = 90
# Initiating variable cars_not_driven with variable cars minus variable drivers 
cars_not_driven = cars - drivers
# Initiating variable cars_driven and assigning it variable drivers
cars_driven = drivers
# Initiating variable carpool_capacity and assigning it with variable cars_driven multiplying with variable space_in_a_car
carpool_capacity = cars_driven * space_in_a_car
# Initiating variable average_passengers_per_car and assigning it variable passengers divide by variable cars_driven
average_passengers_per_car = passengers / cars_driven

print("There are", cars, "cars available.")
print("There are only", drivers, "drivers available.")
print("There will be", cars_not_driven, "empty cars today")
print("We can transport", carpool_capacity, "people today.")
print("We have", passengers, "to carpool today.")
print("We need to put about", average_passengers_per_car, "in each car.")
