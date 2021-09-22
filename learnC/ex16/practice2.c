#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  int *a, *b;
  float *c;
  
  a = (int *) malloc(sizeof(int));
  *a = 1;
  b = (int *) malloc(sizeof(int));
  *b = 2;
  
  free(a);
  free(b);
  
  c = (float *) malloc(sizeof(float));
  *c = 3.5;
  
  free(c);

  printf("a = %d, b = %d, c = %f\n", *a, *b, *c);

  return 0;
}