#include <stdio.h>
#include <stdlib.h>

# We want to store as many grades up to 10.

int main(void)
{
    int * allocateArray(int);    

    int num, i;
    int * array;
    double average;
    printf("How many grades would you like to add?");
    scanf("%d ", num);
    // the funciton allocateArray will return the full array of grades per user input
    array = allocateArray(num);
    printf("Please enter %d grades", num);
    for (i=0; i<num; i++)
    {   
        // Becuase im dealing with a pointer i need to do "array + 1" instead of "array[i]"
        scanf("%d ", array + i); 
    }
    free(array);
    return 0; 

    int * allocateArray(int num)
    {
        int * ptr = (int) malloc(sizeof(int) * num);
        return ptr;
    }
}