#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"
/*int main()
{
	int d = 10;
	int *ptr1 = &d;
	int **ptr2 = &ptr1;
	int *ptr3;

	ptr3 = &d;
	ptr2 = &ptr3;
	printf("ptr1:%p\nptr2:%p\nd:%d\n", ptr1, ptr2, d);
	printf("&ptr1:%p\n&ptr2:%p\n&d:%p\n", &ptr1, &ptr2, &d);
	printf("output:%p", *&*ptr2);
}*/

int main()
{
  char str[] = "hallo";
  char *str1 = str;
  printf("ptr1:%p\n", str );
  printf("ptr2:%p",++str1);
}
