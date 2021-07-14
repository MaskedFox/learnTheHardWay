// Reviewint Memory Allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Define the struct
    typedef struct point 
    {
        float x;
        float y;
    }
    point;

    // Create the "objects"
    point *pt1, *pt2;

    //Allocate memory for each object
    pt1 = (point*) malloc(sizeof(point));
    if (pt1 == NULL)
    {
        printf("cannot allocate memory if size %d\n", sizeof(point));
    }

    pt2 = (point*) calloc (sizeof(point), 1);
    if (pt2 == NULL)
    {
        printf("cannot allocate mmeoery if size %d\n", sizeof(point));
    }

    /Free the objects
    free(pt1);
    free(pt2);

    return 0;
}