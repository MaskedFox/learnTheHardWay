#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("ERROR: You need one argument.\n");
        // This is how you abort a program
        return 1;
    }

    int i = -1;
    // argv[1] its the user argument for ex "Alex", thats 1 argument
    //argv[1][0] its the user argument but on position 0, ex "A"
    for ( ; i++, argv[1][i] != '\0';)
    {
        char letter, lowerLetter;
        letter = argv[1][i];
        lowerLetter = tolower(letter);

        switch (lowerLetter)
        {
            case 'a':
                printf("%d: 'a'\n", i);
                break;

            case 'e':
                printf("%d: 'e'\n",i);
                break;

            case 'i':
                printf("%d: 'i'\n", i);
                break;

            case 'o':
                printf("%d: 'o'\n", i);
                break;

            case 'u':
                printf("%d: 'u'\n", i);
                break;

            case 'y':
                if (i > 2)
                {
                    // It's only sometiumes Y
                    printf("%d: 'y'\n", i);
                }
                break;

            default:
                printf("%d: %c is not a vowel\n", i, letter);


        }
    }
    return 0;
}

//TODO: How to break it
//Done
//Done
//Done
//Done

//TODO: extra Credit
//DONE
//
