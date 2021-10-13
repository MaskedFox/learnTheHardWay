#include <stdio.h>

//Struct

struct car
{
    int doors;
    char color[10];
    int year;
};

//functions


int main(void)
{
    struct car mazda;

    printf("size of Mazda: %zu\n", sizeof(mazda));
    printf("size of doors: %zu\n", sizeof(mazda.doors));
    printf("size of color: %zu\n", sizeof(mazda.color));
    printf("size of year: %zu\n", sizeof(mazda.year));
}