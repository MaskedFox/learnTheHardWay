#include <stdio.h>
//Is this a 2d arrray? Why is it so diffent than 17.c?
int main(void)
{
    // 3 words with a maximum length each of 10 characters
    char words[3][10];

   // take 3 words from user
   int i;
   for (i = 0; i < 3; i ++)
   {
       scanf("%s", words[i]);
   }

   // Print the words the user entered
   for (i = 0; i < 3; i ++)
   {
       printf("%s ", words[i]);
   }
   printf("\n");
   // Print each word and its first letter
   for (i = 0; i < 3; i ++)
   {
       printf("Word is %s with initial %c\n", words[i], words[i][0]);
   }
   return 0; 
}