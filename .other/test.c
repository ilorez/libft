#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	fd;

//	Open a file descriptor for the "test.txt" file, in
//	truncated write only mode, and create the file if it doesn't
//	already exist. Read and write permissions for the owner, read
//	permissions for the group.
	fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
//	Stop everything if the file could not be opened
	if (fd == -1)
		return (1);
//	Print the fd of the new file
	printf("fd = %d\n", fd);
//	Write into the file descriptor
	write(fd, "Hello World!\n", 13);
//	Close the file
	close(fd);
	unlink("test.txt");
	return (0);
}


/*static void *_ft_free_words(char **str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		printf("freed the string (i = %zu): %s\n", i, str[i]);
		free(str[i++]);
		printf("done\n");
	}

	printf("freed the array\n");
	free(str);
	return NULL;
}

int main()
{
	// array of nullsd
	char *str;
	str = malloc(6);

	str[0] = 'h';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = '\0';
	
	char **strs = malloc(2 * sizeof(char *) + 1);
	strs[0] = str;
	strs[1] = NULL;
	strs[2] = 0;
	_ft_free_words(strs);
}*/


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

/*int main()
{
  char str[] = "hallo";
  char *str1 = str;
  printf("ptr1:%p\n", str );
  printf("ptr2:%p",++str1);
}*/
