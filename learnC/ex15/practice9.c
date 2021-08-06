#include <stdio.h>

int main(void) 
{
    //! showMemory(start=65520)
    int array[] = {6, 2, -4, 8, 5, 1};
    int *ptr, *ptr2;
    
    printf("Array contains %d, %d, ... , %d\n", array[0], array[1], array[5]);
    printf("These are stored at %p, %p, ..., %p\n", &array[0], &array[1], &array[5]);
    // array equals &array[0]
    ptr = array;
    ptr2 = &array[2];
    
    *ptr = 10;
    *(ptr + 1) = 5; 
    *(ptr + 2) = -1;
    
    *array = 3;
    *(array + 1) = 10;
    *(array + 2) = 99;
    
    //this will increase the current index of ptr2 by 1 
    // Current index == [2]
    ptr2++;
    // The index is at [3] now, below it will change 8 to 7
    *ptr2 = 7;
    
    ptr += 3;
    *ptr = 8;
    return 0;
}