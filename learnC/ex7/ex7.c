#include <stdio.h>

int main(int argc, char*argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial[] = "A";
    char first_name[] = "Zed";
    char last_name[] = "Shaw";

    printf("You are %d miles away. \n", distance);
    printf("You have %f levels of powers.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %s. \n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);
    printf("My whole name is %s %s. %s.\n", first_name, initial, last_name);

    int bugs = 100;
    double bug_rate = 1.2;
    printf("You ahve %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

    unsigned long universe_of_defects = 1L * 2000000000000000L * 1024L * 1024L;
    printf("The entire universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("that is only a %e portion of the universe.\n", part_of_universe);

    // this makes no sense, just a demo of something weird
    char null_byte = "\0";
    int care_percentage = bugs * null_byte;
    // TODO: The outcome below for me is 3600% why? It should be 0%
    printf("Which means you should care %d%%.\n", care_percentage);

    return 0;

}

//TODO: Break it Exercise < DONE

//TODO: Extra Credit
// Done
// each data type has a #allow memory usage it can hold per data type.
// The result here is negative, because we went over the allow memory number for Unsigned Long.
// Unsigned integers can only hold positve numbers, range from 0 until its range limit. For example Unsigned long range is 0 to 18446744073709551615
// I think in this case you can multiply a char and Int because char is null, which is 0.