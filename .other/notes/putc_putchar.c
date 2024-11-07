#include <stdio.h>

int main(void)
{
  int char1 = 65; /*Typically, the numeric value of A*/
  char char2 = 'A';

  printf("The character whose numeric value is 65 is:\n");
  putc(char1,stdout);
  printf("And char2 has the character:\n");
  putchar(char2);
  return 0;
}
