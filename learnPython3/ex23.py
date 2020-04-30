import sys
script, input_encoding, error = sys.argv


# Function that acts as main, reads a line and if the line is not empty it will continue to print_line, which will call the print_line and return to main
# Everytime main is returned a new line will be read by readline()
def main(language_file, encoding, errors):
    line = language_file.readline()
    if line:
        print_line(line, encoding, errors)
        return main(language_file, encoding, errors)
# Function will strip the content of line and then it will be encoded and store the bytes into raw_bytes
def print_line(line, encoding, errors):
    next_lang = line.strip()
    raw_bytes = next_lang.encode(encoding, errors = errors)
    #cooked_string=raw_bytes.decode(encoding, errors=errors)

    print(next_lang ,"<===>",  raw_bytes)
# opens the file by default as read with options encoding
languages = open("languages.txt", encoding = "utf-8")
# call function main
main(languages, input_encoding, error)
