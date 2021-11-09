#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[50];
    int age;
    struct student *next;
};

//Function Proto
struct student *createStudent(char studentName[], int studentAge);
struct student *copystr(char studentName[], struct student *ptr);

int main(void) 
{
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

struct student *createStudent(char studentName[], int studentAge)
{
    struct student * ptr;
    
    ptr = (struct student *) malloc(sizeof(struct student));
    ptr = copystr(studentName, ptr);
    ptr->age = studentAge;
    ptr->next = NULL;
    return ptr;
}

struct student *copystr(char studentName[], struct student *ptr)
{
    int i, ageSize;
    ageSize =sizeof((int *)studentName);
    for(i =0; i<ageSize; i++)
    {
        ptr->name[i] = studentName[i];
    }
    return ptr;
}