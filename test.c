#include "stdio.h"
#include "stdlib.h"
int main(int ac, char **av)
{
	printf("nb:%d\n", atoi(av[1]));
	return ac;
}
