#include <stdio.h>
#include <stdlib.h>

//functions 
//int ** allocateIntStarArray(int);
int * allocateIntArray(int);

int main (void)
{
    
    //variables
    int lenght, width;
    int i,j;
    int * array;
    
    //User's input for Length and Width
    scanf("%d %d", &lenght, &width);

    //function to create an array of int
    array = allocateIntArray(lenght*width);
    
    for (i=0; i<lenght*width; i++)
    {
        // Creating an array based on users input
        scanf("%d", array + i);
    }

    int d = 0;
    //print the grid, with same numbers as input
    // Then use if - else  to print fire etc
    for (i=0; i<width; i++)
    {   
        printf("\n");
        for (j=0; j<lenght; j++)
        {
            // printing the users input numbers
            printf("%d ", *(array + d));
            d++;
        }
    }

    free(allocateIntArray);
    
    return 0;
}
    
    //functions
    /*   
    int ** allocateIntStarArray(int num)
    {
        int ** ptr = (int **) malloc(num * sizeof(int *));
        return ptr;
    }
    */
int * allocateIntArray(int num)
{
    int * ptr = (int *) malloc(num * sizeof(int));
    return ptr;
}
    
