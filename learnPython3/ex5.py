myName = "Zed A. Shaw"
myAge = 35 # not a lie
myHeight = 74 # inches
myWeight = 180 # lbs
myEyes = "Blue"
myTeeth = "White"
myHair = "Brown"

print(f"Let's talk about {myName}.")
print(f"He's {myHeight} inches tall.")
print(f"He's {myWeight} pounds heavy.")
print("Actually that's not too heavy.")
print(f"He's got {myEyes} eyes and {myHair} hair.")
print(f"His teeth are usually {myTeeth} depending on the coffee.")

# this line is tricky, try to get it exactly right
total = myAge + myHeight + myWeight
print(f"If I add {myAge}, {myHeight}, and {myWeight} I get {total}.")

convertingToCentimeters = myHeight * 2.54
convertingToKilograms = myWeight * 0.45359237

print(round(convertingToCentimeters), "Centimeters")
print(round(convertingToKilograms), "Kilos")