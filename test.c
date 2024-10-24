#include "stdio.h"

int main()
{
	int ddd = 1;
	int* ptr;
	(*ptr) = 77;
	printf("1: %p,\n2: %i", ptr, *ptr);
}
