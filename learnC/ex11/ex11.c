#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    //Here it will print 1 0 0 0, this is because the elements are numbers
    int numbers[4] = {1};
    //However here it will only print "a", this is because the elements are characters and chars end with "\0" at the of it.
    char name[4] = "a";

    // Testing memcpy hack? didnt work for obv reasons, but i didnt get the question obv
    //memcpy (name, numbers, 3);

    //First, print them out raw
    printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    printf("name: %s\n", name);



    //Set up the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    //Set up the name
    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
    name[3] = '\0';

    // then print them out initialized
    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    // print the name like a string
    printf("name: %s\n", name);

    // Another way to use name
    char *another = "Zed";
    printf("Another: %s\n", another);
    printf("Another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

    return 0;

}

//TODO: How To Break it
// Done
// Done
// Done

//TODO: Extra Credit
//Done
//Done
//
// Tried, but didnt get the question
//Done
//Done

