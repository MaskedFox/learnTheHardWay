#include <stdio.h>

struct point
{
    int x;
    int y;
};

void readPoint(struct point *ptr);
void printPoint(struct point);
void printTriangle(struct point *Triangle);

int main(void)
{
    struct point Triangle[3];
    int i;
    for(i=0; i<3; i++) 
    {
        // we need to pass a pointer in order to modify the content
        readPoint(&Triangle[i]);
        
    }
    // we need to pass a pointer in order to loop around it and print it
    printTriangle(Triangle);

    return 0;
}


void readPoint( struct point *ptr)
{
    scanf("%d %d", &ptr->x, &ptr->y);
}

void printTriangle(struct point *Triangle)
{
    //printf("%p\n", Triangle);
     int i;
    for(i=0; i<3; i++) 
    {
        printPoint(Triangle[i]);
    }
}

void printPoint(struct point A)
{
    printf("Points A & B: %d %d\n", A.x, A.y);
}
