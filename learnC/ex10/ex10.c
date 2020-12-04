#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("ERROR: You need one argument.\n");
        // This is how you abort a program
        return 1;
    }

    int i = 0;
    // argv[1] its the user argument for ex "Alex", thats 1 argument
    //argv[1][0] its the user argument but on position 0, ex "A"
    for (i = 0; argv[1][i] != '\0'; i++)
    {
        char letter = argv[1][i];

        switch (letter)
        {
            case 'a':
            case 'A':
                printf("%d: 'A'\n", i);
                break;

            case 'e':
            case 'E':
                printf("%d: 'E'\n",i);
                break;

            case 'i':
            case 'I':
                printf("%d: 'I'\n", i);
                break;

            case 'o':
            case 'O':
                printf("%d: 'O'\n", i);
                break;

            case 'u':
            case 'U':
                printf("%d: 'U'\n", i);
                break;

            case 'y':
            case 'Y':
                if (i > 2)
                {
                    // It's only sometiumes Y
                    printf("%d: 'Y'\n", i);
                }
                break;

            default:
                printf("%d: %c is not a vowel\n", i, letter);


        }
    }
    return 0;
}

//TODO: How to break it

//TODO: extra Credit
