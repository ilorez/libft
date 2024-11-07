#include <stdio.h>
#define MAX_LENGTH 80

int main(void)
{
  char string[MAX_LENGTH];

  printf("Please, write a line of no more than 80 characters:\n");
  gets(string);
  printf("The entered line is:\n");
  puts(string);
  return 0;
}
