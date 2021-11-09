#include <stdio.h>
#include <stdlib.h>

// make a linked list of 3

struct point{
    int x;
    int y;
    struct point *next;
};

//Functions


int main (void)
{
    struct point A = {1, 2, NULL};
    struct point B = {2, 3, NULL};
    struct point C = {3, 4, NULL};
    struct point *ptr, *start;

    start = &A;
    A.next = &B;
    B.next = &C;

    //printf("%d %d\n", start->x, start->y);

    ptr = start;

    
    while(ptr!=NULL)
    {
        printf("%d %d\n", ptr->x, ptr->y); 
        ptr= ptr->next;
    }
    
    return 0;

}