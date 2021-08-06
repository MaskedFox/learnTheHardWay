#include <stdio.h>
//Print the address
//Print the 
void changeFam(char **);

// What im trying to do in this exercise practice
// is to instead of using *b = "Adams family"
// to use b[] = "Adams family" and change the whole thing
// at the function, seems this not the right way to do it though
/*
Ok got it, i know now why i cant what i wanted to do
Basically each when doing b[] = "Adams family"
each character has its own memory address, on the contrary
when i do *b = "adams family" and point to one address in the memory
where i can retrieve it all
NOTE!!!: as we see on exercise 15
i can do char *names[] = {"Alex", "John","Marcus"}
and then i could index it with a loop names[i]
*/
int main (void)
{
    //! showMemory(start=65520)
    char a[5] = "The ";
    char b[] = "Adam's family";
    printf("The name of the family is: %s%s\n", a, b);
    changeFam(&b);
    printf("changed to: %s%s\n",a, b);
    return 0;
}

void changeFam(char **b)
{
    **b = "Simpsoms's family";
}

     