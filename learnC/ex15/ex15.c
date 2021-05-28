#include <stdio.h>

int main(int argc, char *argv[])
{
    // create two arrays we care about
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = 
    {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // first way using indexing
    for (i = 0; i < count; i++)
    {
        printf("%s has %d years alive. \n", names[i], ages[i]);
    }

    printf("---\n");

    // set up the pointers to the start of the arrays
    int *cur_age = ages;
    // creates a points of type char that points at names and
    // at the same time it derefence it self? Am i right?
    char **cur_name = names;
    // This should print "Alan" and cur_name[0+1] should print "Frank"
    printf("Printing **cur_name = names; %s\n", cur_name[0]);


    // second way using pointers
    for (i = 0; i < count; i++)
    {
        //i made it print the address of each name instead
        printf("%d is %d years old. \n", (cur_name + i), (cur_age + i));
    }

    printf("---\n");

    // third way, pointers are just arrays
    for (i = 0; i < count; i++)
    {
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }

    printf("---\n");
    

    // fourth way with pointers in a stupid complex way
    // Trying to understand the below for loop
    printf("printing names %d\n", names);
    for (cur_name = names, cur_age = ages;
        (cur_age - ages) < count; cur_name++, cur_age++)
        {
            printf("%s lived %d years so far. \n", *cur_name, *cur_age);
        }
        
        return 0;
}