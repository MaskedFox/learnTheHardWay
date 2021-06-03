// Reviewing Arrays to then review pointers
#include <stdio.h>

int main()
{
    int numbers[20];

    int val[5]= {1,2,3,4,5};
    int i;
    //This is the reason why we need to divide sizeof(val) / sizeof(int)
    printf("printing size of Val: %d\n", sizeof(val));
    printf("Printing size of Int: %d\n", sizeof(int));

    // Instead of count, the below is a better practice
    for (i=0; i< sizeof(val) / sizeof(int); i++)
    {
        printf("index number%d and value is %d\n", i, val[i]);
    }
    return 0;
}