#include <stdio.h>

/* This is a comment. */

int main(int argc, char *argv[])

{
    int distance = 100;

    //this is also a comment

    printf("You are %d miles away.\n", distance);

    return 0;
}



/* Notes:
make ex1.c

inside make:
cc -Wall -g ex1.c -o ex1
*/

//#Q: Whats -Wall?


//#Q: Whats -g? for debbuging?

/* Break it:
I tried removing the formatter and received an error.
However when i tried removing "\n"I didn't get any error...
The one thing i noticed when i ran the program was a symbol "%" at the end of the line
I tried "print" instead of "printf" and got an error
I tried returning "1" instead of "0" but i didnt noticed anything weird happening not even when running the program.
I removed  "int argc, char *argv[]" from main and evertything worked as suppose to even running the program.
I added another 100 to "int distance = 100" so it would look like this "int distance = 100,100" and received and error at compilation
You cant have two variable names and values in the same line (Good!)
*/

/* Extra Credit:

*\