#include "stdlib.h"


//test orinal calloc function



int main(int ac, char **av)
{
  int *p = (int *)calloc(5, sizeof(int));
  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", p[i]);
  }
  return 0;

}
