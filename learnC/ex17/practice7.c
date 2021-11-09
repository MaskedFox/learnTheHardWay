#include <stdio.h>
#include <stdlib.h>

struct digit
{
    int num;
    struct digit *next;
};

//Functions
struct digit *createPtr(int num);

int main(void)
{
    struct digit *numptr;
    int num;
    num = 5;
    numptr = createPtr(num);
    printf("%d\n", numptr->num);
    free(numptr);
    return 0;
}

struct digit *createPtr(int num)
{
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = num;
    ptr->next = NULL;
    return ptr;
}