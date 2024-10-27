#include "stdio.h"
#include "stdlib.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	len = 0;
	if (size > 0)
	{
		while (src[len] && --size)
		{
			dest[len] = src[len];
			len++;
		}
		dest[len] = '\0';
	}
	while (src[len])
	{
		len++;
	}
	return (len);
}


int main (int ac, char **av)
{
	// test the function if it's really cpy the src to dst with a size of dstsize
	if (ac == 4)
	{
		char *dst = (char *)malloc(atoi(av[3]));
		printf("%d\n", ft_strlcpy(dst, av[1], atoi(av[2])));
		printf("%s\n", dst);
	}
	return (0);

}