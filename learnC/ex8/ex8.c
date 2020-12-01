#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc == 1)
    {
        printf("You Dont have any arguments! You suck.\n");
    }
    else if (argc >= 2 && argc < 4)
    {
        printf("Here is your arguments:\n");
        for (i = 0; i < argc; i++)
        {
            printf(" %s", argv[i]);
        }
        printf("\n");
    }
    else
    {
        printf("You have too many arguments. You suck.\n");
    }

    return 0;

}


//TODO: Break
//Done
//Done

//TODO: Extra Credit
// and == &&, or== ||, not == !
// Done
// Done, the first argument now is the one provided by the user