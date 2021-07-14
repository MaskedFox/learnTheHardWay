#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

//Setup struct for Person that has name,age, height, weight
struct Person
{
    //Why do we point to name?
    char *name;
    int age;
    int height;
    int weight;
};
// Create Person and Allocate space in memory for person1, person2, etc

struct Person *Person_create(char *name, int age, int height, int weight)
{
    struct Person *who = malloc(sizeof(struct Person));
    assert(who != NULL);
    // why do we use a strdup?
    who->name = strdup(name);
    who->age = age;
    who-> height = height;
    who->weight = weight;

    return who;
}
//Print the name age, height and weight
int main()
{
    // Create "objects"
    struct Person *Person1 = Person_create("Alex", 33, 511, 182);
    struct Person *Person2 = Person_create("Brian", 28, 6, 200);
    //print objects
    printf("Person1 is at memory location: %p\n", Person1);
    printf("name of Person1: %s\n", Person1->name);
    
    //free the persons you create
    free(Person1);

    return 0;


}
