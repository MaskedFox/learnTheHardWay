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
struct point * append(struct point *end, struct point *start);
struct point * createPts(int x, int y);
struct point * freePoints(struct point * start);


int main (void)
{
    // how many points, store in num
    // for loop needs an int i
    //int x int y
    int num, i, x, y;
    struct point * start, *end, *newpt;

    printf("how many points?\n");
    scanf("%d", &num);
    for(i=0; i<num; i++)
    {
        printf("Enter x and Y\n");
        scanf("%d %d", &x, &y);
        newpt = createPts(x,y);
        if (i==0)
        {
            start = end = newpt;
            
        }
        else
        {
            end = append(end, newpt);
        }           
    }
    printLinked(start);    
    freePoints(start);
    return 0;
}
struct point * freePoints(struct point * start)
{
    struct point * ptr = start;
    while (ptr!=NULL)
    {
        start = ptr;
        ptr = ptr->next;
        free(start);
    }
}
struct point * createPts(int x, int y)
{
    struct point * ptr;
    ptr = (struct point *) malloc(sizeof(struct point ));
    ptr->x = x;
    ptr->y = y;
    ptr->next = NULL;

    return (ptr);
}

struct point * append(struct point *end, struct point *start)
{
    end->next = start;
    return (end->next);
}

void printLinked(struct point *start)
{ 
    while(start!=NULL)
    {
        printf("%d %d\n", start->x, start->y); 
        start= start->next;
    }
}