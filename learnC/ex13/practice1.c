#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int rows;
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        
        for (j = 0; j < i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");

    }

}

/*
for ( initialization; condition; increment ) 
{

   for ( initialization; condition; increment ) 
   {
      
      // statement of inside loop
   }

   // statement of outer loop
}
*/