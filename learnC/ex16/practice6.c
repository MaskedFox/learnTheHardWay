#include <stdio.h>

struct Student
{
    char name[30];
    char lastName[30];
    int age[3];
    int grade[2];
};

int main(void)
{
    struct Student me;
    printf("Whats your name?\n");
    scanf("%s", me.name);
    printf("Whats your last name?\n");
    scanf("%s", me.lastName);

    printf("Your name is: %s\n", me.name);
    printf("Your last name is: %s\n", me.lastName);
}