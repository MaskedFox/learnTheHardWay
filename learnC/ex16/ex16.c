// includes new libraries
//first library is the standard input output
// Formatted Input/Output Functions, File Operation Functions, Character Input/Output Functions
#include <stdio.h>
// provides a macro called assert which can be used to verify
// assumptions made by the p;rogram and print a diagnostic mesage if this assumption is false
#include <assert.h>
// General Purpose Standard Library, delcares a variaey of utility functions for type conversions(atoi),
// memory allocation (calloc, malloc, etc), process control(system) and other similar tasks.
#include <stdlib.h>
// This one is kinda obvious =p
// strcat, strcmp, strcpy, strlen
#include <string.h>

// creates what a Person has/is
struct Person 
{
    //Why is it only name a pointer?
    char *name;
    int age;
    int height;
    int weight;

};
// This is what initiliazes the object? (struct?)
struct Person Person_create(char *name, int age, int height, int weight)
{
    struct Person who;
    //assert(who != NULL);
    // Whats strdup?
    // strdup function to duplicaete the string for the name, just to make sure that this structure actually owns it.
    // The Strdup actually is like malloc, and it also copies the original string into the memory it creates.
    who.name = name;
    who.age = age;
    who.height = height;
    who.weight = weight;

    return who;
}

// I assume this destroys stricly the name pointer and everything within
// who, why? why not just destroy who?
void Person_destroy(struct Person *who)
{
    // to make sure we dotn get a bad input 
    assert(who != NULL);
    // if i didnt use free below i would get a memory leak
    // also since i used strdup and its like malloc i need to free that one 
    // as well
    free(who->name);
    free(who);
}
// Explains on its own
void Person_print(struct Person who)
{
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char *argv[])
{
    // Make two people structures
    struct Person joe = Person_create("Joe Alex", 32, 64, 140);

    struct Person frank = Person_create("Frank Blank", 20, 72, 180);

    // Print them out and where they are in memory
    // Notice usage of format %p
    printf("Joe is at memory location %p:\n", &joe);
    Person_print(joe);

    printf("Frank is at memory location %p:\n", &frank);
    Person_print(frank);

    // Make everyone age 20years and print them again
    joe.age += 20;
    joe.height -=2;
    joe.weight +=40;
    Person_print(joe);

    frank.age +=20;
    frank.weight +=20;
    Person_print(frank);

    // Destroy them both so we clean up
    //Person_destroy(joe);
    //Person_destroy(frank);

    return 0;

}

/* How to break it
#1: Done
#2: Done (nothing happend...) 
#3: Done (nothing happened...)
#4: Done got a seg fault, why? 
*/

/* Extra Credit
#1: DONE 
#2: DONE
#3: DONE
*/