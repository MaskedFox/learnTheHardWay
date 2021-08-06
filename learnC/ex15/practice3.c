
#include <stdio.h>
//Print the address
//Print the value


void changeNum(int *);

int main (void)
{
    //! showMemory(start=65520)
    int a = 4;
    int b = 6;
    printf("This is the address of b in main: %p\n", &b);
    printf("Printing current numbers a=%d b=%d\n", a,b );
    printf("\n");
    changeNum(&b);
    printf("We are back in main\n");
    printf("Printing numbers after we exit the Function, this is main a=%d b=%d\n", a,b );
    printf("Printing the address of b after we changed the value: %p\n", &b);
    return 0;
}

void changeNum(int *b)
{
    printf("This is inside the function, Printing the address of b %p\n", b);
    printf("Printing the value of b %d\n", *b);
    printf("changing the value of b to 10\n");
    *b = 10;
    printf("Multiplying by 10\n");
    *b = *b * 10;
    printf("\n");
    
}     