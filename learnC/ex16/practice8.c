//Pass structures to functions with pointers
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
void readStudent(struct Student *);

int main(void)
{
    struct Student me;
    
    // Takes input from users
    readStudent(&me);
    // prints input from users
    printStudent(me);
    return 0;
}

void readStudent(struct Student *stu)
{
    printf("Whats your name?\n");
    scanf("%s", (*stu).name);
    printf("Whats your last name?\n");
    scanf("%s", (*stu).lastName);
}

void printStudent(struct Student stu)
{
    printf("Your name is: %s\n", stu.name);
    printf("Your last name is: %s\n", stu.lastName);
    printf("Your last name is: %s\n", stu.lastName);
}
