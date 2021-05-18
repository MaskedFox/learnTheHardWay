#include<stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // go through each string in argv
    // why am I skipping argv[0]?
    for (i=0 ; i < argc; i++)
    {
        printf("arg %d %s\n", i, argv[i]);
    }

    // let's make our won array of strings
    char *states[] =
    {
        "California", "Oregon",
        "Washignton", "Texas"
    };

    int num_states = 4;

    for (i = 0; i < num_states; i++)
    {
        printf("state %d %s\n", i, states[i]);
    }

    return 0;
}

// TODO How to break it
// MEH
// DONE
// DONE Segmentation Fault, if the num of states is higher than 4

/*
// TODO Extra credit
DONE: Functions, increasing or decreasing variables, another for loop, count by character, 
DONE: add nother variable or  add another increment or decrement, can also start the initialization 
without anything like this int i = 0; for (; i<4; i++);
IN PROGRESS
NOT DONE YET
*/