#include <stdio.h>

int main(int argc, char *argv[])
{
     char full_name[] =
    {
        'Z', 'e', 'd',' ','A','.',' ','S','h','a','w','\0'
    };
    // Creating an array of 5 char
    int areas[] = {10, 12, 13, 14, 20};
    areas[3] = 15;
    areas[4] = 14;
    // Creating an array of 3 characters + \0
    char name[] = "Zed";

    //For Extra credit
    areas[4] = name[0];

    //Warning: On some systems you may have to change the
    // %ld in this code a %u since it will use unsigned ints
    //The size of an int is 4
    printf("The size of an int: %ld\n", sizeof(int));
    //This should be 20
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    //20 / 4 = 5
    printf("The number of ints in areas: %ld\n", sizeof(areas)/ sizeof(int));
    //10 and 12
    printf("The first area is %d, the 2nd %d.\n", areas[3], areas[4]);
    //The size of a char is 1
    printf("The size of a char: %ld\n", sizeof(char));
    // this should be 4
    printf("The size of name (char[]): %ld\n", sizeof(name));
    // 4
    printf("The number of chars: %ld\n", sizeof(name)/sizeof(char));
    //12
    printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
    // 12
    printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
    // "Zed" and "Zed A. Shaw" --> changing it for extra Credit
    name[0] = 'A';
    name[1] = 'e';
    printf("name=\"%s\" and full_name=\"%s\n", name, full_name);

    return 0;
}

//How to break it
// Done got an extra "8" at the end of it.
// Read past the area big minus number
//Done

//Extra credit
// Done
// Done
// Done
// Done
