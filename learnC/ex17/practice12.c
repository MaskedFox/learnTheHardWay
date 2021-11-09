#include <stdio.h>
#include <stdlib.h>

struct digit
{
    int num;
    struct digit *next;
};

//Functions
struct digit *createPtr(int num);
struct digit *append(struct digit *end, struct digit *numptr);

int main(void)
{
    struct digit *numptr, *start, *end;
    int num, numDig,i;
    //num = 5;
   
    //take input from user
    printf("How many digits do you want to store?\n");
    scanf("%d", &numDig);
    for(i=0; i< numDig; i++)
    {
        scanf("%d", &num);
        numptr = createPtr(num);
        if (i==0)
        {
            start = end = numptr;
        }
        else
        {
            //end->next = end;
            // or 
            end = append(end, numptr);
        }
        printf("%d\n", numptr->num);
        
    }
    //free?

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

struct digit *append(struct digit *end, struct digit *numptr)
{
    end->next = numptr;
    end = numptr;
    return end;
}