#include <stdio.h>
// we are using malloc, therefore we need to include the library for it
#include <stdlib.h>

int main(void)
{
    int *ptr;
    // the casting below is just for easier readability, we dont need it.
    ptr = (int *) malloc(sizeof(int));
    
    *ptr = 4;
    
    return 0;

}

//NOTE: the purpose of malloc is to reserve a chunk of memory (in the heap)
// for you to use. Read below for etc.

/*
The memory management needs to know where one block ends in order to be able to allocate 
another block behind it.

Please remember that we are talking about dynamic memory management. 
The number of allocated blocks can change and the size of each allocated block can be
 different. Therefore, you need this overhead to manage the blocks. 
 If your system/aplication is fine with a static fixed-size memory layout then it 
 would be overhead.
 */
