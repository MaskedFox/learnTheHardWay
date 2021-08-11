#include <stdio.h>

int main(void)
{
     //! showMemory(start=65520)
    
    char *arr[2] = { "hola", "chau" };
    char *arrEng[2] = { "Hi", "bye" };
    char **ptr[2] = {arr, arrEng};
    printf("%s\n", *(*(ptr)+1));
    *(*(ptr)+1) = "Hey";
    printf("%s", *(*(ptr)+1));
    return 0;
}

/*
NOTE: i dont like the way shown below, the above seems to be easier for me

#define NUMBER_OF_STRING 4
#define MAX_STRING_SIZE 40

char arr[NUMBER_OF_STRING][MAX_STRING_SIZE] =
{ "array of c string",
  "is fun to use",
  "make sure to properly",
  "tell the array size"
};
*/