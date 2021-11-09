#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;
};

void readPoint(struct point *ptr);
void printPoint(struct point);
void printPolygon(struct point *Polygon, int);

int main(void)
{
    struct point *Polygon;
    int i, num;

    printf("How many vertices? \n");
    scanf("%d ", &num);
    
    Polygon = (struct point *) malloc(sizeof(struct point) * num);

    for(i=0; i<num; i++) 
    {
        // we need to pass a pointer in order to modify the content
        readPoint(&Polygon[i]);
        
    }
    // we need to pass a pointer in order to loop around it and print it
    printPolygon(Polygon, num);

    return 0;
}


void readPoint( struct point *ptr)
{
    scanf("%d %d", &ptr->x, &ptr->y);
}

void printPolygon(struct point *Triangle, int num)
{
    //printf("%p\n", Triangle);
     int i;
    for(i=0; i<num; i++) 
    {
        printPoint(Triangle[i]);
    }
}

void printPoint(struct point A)
{
    printf("Points A & B: %d %d\n", A.x, A.y);
}
