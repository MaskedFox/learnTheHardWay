#include <stdio.h>

void myFunction(int *, double *, char *);

int main(void) 
{
    //! showMemory(start=65520)
    int i = 42;
    int *iAdr = &i;
    double a = 3.14;
    double * aAdr = &a;
    char c = 'p';
    char * cAdr = &c;
    printf("i = %d and its address is %p.\n", i, iAdr);
    printf("a = %lf and its address is %p.\n", a, aAdr);
    printf("c = %c and its address is %p.\n", c, cAdr);
    myFunction(iAdr, aAdr, cAdr);
    return(0);
}

void myFunction(int *iptr, double * aptr, char * cptr) 
{
    printf("%d\n", *iptr);
    printf("Function receied addresses %p, %p and %p.\n", iptr, aptr, cptr);
}

/*
I just realized the following on above code
Its cleaner to use int *iAdr = &i;
and then passing iAdr to myFunction
for example:
myFunction(iAdr);
void myFunction(int *iptr)
{
    printf("%p", iptr);
}

Than just passing myFunction(&i) to

void myFunction(int *iptr)
{
    printf("%p", iptr);
}

Both do the same thing, but the first one is clear, 
Better to read someone else code
*/
