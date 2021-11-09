#include <stdio.h>

struct point
{
    int x;
    int y;
};

void readPoint(struct point *);
void printPoint(struct point);

int main(void)
{
    struct point A;
    
    readPoint(&A);
    printPoint(A);

    return 0;
}

void readPoint( struct point *A)
{
    scanf("%d %d", &A->x, &A->y);
}

void printPoint(struct point A)
{
    printf("Points A & B: %d %d\n", A.x, A.y);
}
