#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *start);
struct digit * readNumber();
struct digit * searchNumber(struct digit *start, int number);

int main(void) {
    //! stack = showMemory(start=65520)
    struct digit *start, *ptr;
    int number = 4;
    start = readNumber();
    printNumber(start);
    ptr = searchNumber(start, number);
    if (ptr!=NULL)
    {
        printf("The number %d is at position %p\n", number, ptr);
    }
    else
    {
        printf("We couldnt find your number =/\n");
    }
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit * readNumber()
{
    struct digit *start, *newDigptr, *end;
    char c;
    int d;
    start = NULL;
    scanf("%c",&c);
    while (c!='\n')
    {
        d = c-48;
        newDigptr = createDigit(d);
        if (start == NULL)
        {
            start = end = newDigptr;
        }
        else
        {
             //end->next = end;
             end = append(end, newDigptr);
        }
        scanf("%c",&c);
    }
    return start;
}
struct digit * searchNumber(struct digit *start, int number)
{
    struct digit * ptr = start;
    while (ptr!=NULL && ptr->num!=number)
    {
        ptr = ptr->next;
    }
    return ptr;
}