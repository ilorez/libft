#include <stdio.h>

int main(void)
{
  int ch1;
  char ch2;

  printf("Please, type in two characters together:\n");
  ch2 = getchar();
  ch2 = getchar();
  ch1 = getc(stdin);
  printf("The first character you have typed is: %c\n",ch1);
  printf("The second character you have typed is: %c\n",ch2);
  return 0;
}
