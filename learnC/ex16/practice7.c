#include <stdio.h>

struct Student
{
    char name[30];
    char lastName[30];
    int age[3];
    int grade[2];
};

// Functions
void printStudent(struct Student);

int main(void)
{
    struct Student me;
    printf("Whats your name?\n");
    scanf("%s", me.name);
    printf("Whats your last name?\n");
    scanf("%s", me.lastName);

    printStudent(me);
    return 0;
}

void printStudent(struct Student stu)
{
    printf("Your name is: %s\n", stu.name);
    printf("Your last name is: %s\n", stu.lastName);
    printf("Your last name is: %s\n", stu.lastName);
}
