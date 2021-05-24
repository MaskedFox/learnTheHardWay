#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declaration
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 1;

    for (i = 0; i < argc; i++)
    {   
        // Prints the length of each arg
        printf("This word's length is: %ld\n",strlen(argv[i]));
        print_letters(argv[i]);
    }
}

void print_letters(char arg[])
{
    int i = 0;

    for (i=0; arg[i] != '\0'; i++)
    {
        char ch = arg[i];
        if (isalpha(ch) || isblank(ch) || isascii(ch))
        {   
            // Book says to print ASCII, but i rather print hex
            // Now i have a char to hex converter =p
            printf("'%c' == %#x ", ch, ch);
        }
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);

    return 0;
}

/*
 How to break it:
 #1: Done
 #2: Instead of arc i did it on argv+1, obv got a seg fault as well
*/

/*
Extra Credit
#1: Done
#2: Done 
#3: Done 
#4: Done
*/


