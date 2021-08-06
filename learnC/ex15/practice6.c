#include <stdio.h>

int main() 
{
    //! showMemory(start=65520)
    int arr[3] = {15, 16, 17};
    int i;
    
    for (i=0;i<sizeof(arr)/4;i++)
    {
        printf("printing array index %d with value: %d\n",i,arr[i]);
    }
    
    int * ptr = arr;
    * ptr = 2; // * arr   0R  arr[0]
    * (ptr + 1) = 3; // * (arr + 1)   OR  arr[1]
    * (ptr + 2) = 5;// * (arr + 2)   OR arr[2]
    int j;
    for (j=0;j<sizeof(arr)/4;j++)
    {
        printf("Printing array index %d with new values: %d\n",j, *(ptr + j));
    }
   
    return 0;
}