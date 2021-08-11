#include <stdio.h>

int main(void)
{
    // How many characters per word? a[5], a max of 5 chars
    char a[5];
    char b[5];
    char c[5];
    char *ptrArr[3] = {a, b, c};

    printf("Please enter 3 words: ");
    // Not a good security practice, but edx (Darmouth teaches this way =s) 
    // tried this input hooooooooooooooooooooooooooooooooooola chau cia
    // got a segmentation fault as expected
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);
    printf("You entered: %s %s %s", *ptrArr, *(ptrArr + 1), *(ptrArr + 2));
    // Hehe above i chose the hard way, the same could have been done like this:
    // printf("You entered: %s %s %s", a, b, c;
    // printf("You entered: %s %s %s", ptrArr[0], ptrArr[1], ptrArr[2];

    return 0;
}