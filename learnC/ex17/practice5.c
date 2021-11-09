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
void append(struct point *end, struct point *start);

int main (void)
{
    struct point A = {1, 2, NULL};
    struct point B = {2, 3, NULL};
    struct point C = {3, 4, NULL};
    struct point * start, end;

    start = &A;
    append(&A, &B);
    append(&B, &C);

    //printf("%d %d\n", start->x, start->y);

    printLinked(start);
   
    
    return 0;

}

void append(struct point *end, struct point *start)
{
    end->next = start;
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