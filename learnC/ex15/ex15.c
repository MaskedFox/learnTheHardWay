#include <stdio.h>

int main(int argc, char *argv[])
{
    // create two arrays we care about
    int *ages[] = {23, 43, 12, 89, 2};
    char *names[] = 
    {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // safely get the size of ages
    int count = -(sizeof(ages)) / -sizeof(int);
    int i = 4;

    // first way using indexing
    for (i = 4; i >= count; i--)
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
    for (i = 4; i >= count; i--)
    {
        //i made it print the address of each name instead
        printf("%s is %d years old. \n", *(cur_name + i), *(cur_age + i));
    }

    printf("---\n");

    // third way, pointers are just arrays
    for (i = 4; i >= count; i--)
    {
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }

    printf("---\n");
    

    // fourth way with pointers in a stupid complex way
    // Trying to understand the below for loop
    printf("printing names %s\n", names[1]);
    //
    for (i = 4; i >= count; i--)
        {
            printf("%s lived %d years so far. \n", cur_name[i], cur_age[i]);
        }
        
        return 0;
}

/* How to break it
#1: Done 
#2: Done
#3: DONE 
*/

/* Extra Credit
NOTE: Wont do these exercises as these question isnt formed to make sense + this
https://stackoverflow.com/questions/17226278/pointers-and-arrays-learn-c-the-hard-way
#1:
#2:
#3:
#4:
#5:
#6:
#7:
#8;
*/
