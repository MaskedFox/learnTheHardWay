#include <stdio.h>

struct Animal
{
    char name[30];
    int age[3];
    char color [30];
};

int main(void)
{
    struct Animal cat = {"Seneca", 1, "Marble"};
    struct Animal dog = {"Paco", 2, "Marble"};

    printf("Cat's name: %s\n", cat.name);
    printf("Dog's name: %s\n", dog.name);

    return 0;
}