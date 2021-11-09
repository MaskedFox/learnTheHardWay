#include <stdio.h>
#include <stdlib.h>

// make a linked list of 3

struct point{
    int x;
    int y;
    struct point *next;
};

//Functions
void printLinked(struct point *);

int main (void)
{
    struct point A = {1, 2, NULL};
    struct point B = {2, 3, NULL};
    struct point C = {3, 4, NULL};
    struct point * start;

    start = &A;
    A.next = &B;
    B.next = &C;

    //printf("%d %d\n", start->x, start->y);

    printLinked(start);
   
    
    return 0;

}

void printLinked(struct point *start)
{
     //struct point * ptr;
     //ptr = start;

    
    while(start!=NULL)
    {
        printf("%d %d\n", start->x, start->y); 
        start= start->next;
    }
}