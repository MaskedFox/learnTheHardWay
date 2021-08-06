#include <stdio.h>
//Print the address
//Print the 
void changeFam(char *[]);

int main (void)
{
    //! showMemory(start=65520)
    char a[5] = "The ";
    char *b = "Adam's family";
    printf("the name of the family is: %s%s\n", a, b);
    changeFam(&b);
    printf("changed to: %s%s\n",a, b);
    return 0;
}

void changeFam(char *b[])
{
    *b = "Simpsoms";
}

     