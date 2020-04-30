# imports arv and exist from packages
from sys import argv
from os.path import exists
# we need to pass three arguments
script, from_file, to_file = argv

#print(f"Copying from {from_file} to {to_file}")

# we could do these two on one line, how?
# We open a file that comes from_file and we read it with the flag "r", then we store it in indata
indata = open(from_file, 'r')
# indata = in_file.read()

print(f"The input file is {len(indata)} bytes long")

print(f"Does the output file exist? {exists(to_file)}")
print("Ready, hit RETURN to continue, CTRL-C to abort.")
input()
# We open a to_file and we write to it setting the flag "w" and storing it in out_file
out_file = open(to_file, "w")
# We take out_file and write indata content into it.
out_file.write(indata)

print("Alright, all done.")
# We close both files
out_file.close()
in_file.close()
