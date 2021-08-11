#include <stdio.h>

int main(void)
{
    int arrNum[2] = {1, 2};
    int arrNumTwo[2] = {3, 4};
    int * ptrArr[2] = {arrNum, arrNumTwo};
    
    printf("Array 0 and position 0: %d\n", *ptrArr[0]);
    printf("Another way: %d\n", *ptrArr[0]+1);
    printf("Another way: %d\n", ptrArr[0][1]);
    printf("Another way: %d\n", *(ptrArr[0]+1));
    
    
    
    * ptrArr[0] = 6;
    printf("%d", *ptrArr[0]);
    
    return 0;
}