/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:51:08 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/27 09:51:10 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "stdlib.h"
//#include "stdio.h"

static void	*_ft_memset(void *b, int c, size_t len)
{
	char			*nb;
	size_t			i;
	unsigned int	uc;

	if (!b)
		return (NULL);
	i = 0;
	uc = c;
	nb = b;
	while (i < len)
		nb[i++] = uc;
	return (b);
}

static void	_ft_bzero(void *s, size_t n)
{
	_ft_memset(s, 0, n);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	t;
	void	*ptr;

	t = count * size;
	ptr = malloc(t);
	if (!ptr)
		return (NULL);
	_ft_bzero(ptr, t);
	return (ptr);
}

/*int main(int ac, char **av)
{
	int	*p;
	int	*p1;

  p = (int *)calloc(atoi(av[1]), atoi(av[2]));
  p1 = (int *)ft_calloc(atoi(av[1]), atoi(av[2]));
   if (!p)
  {
		printf("p is NULL");
}
if (!p1)
  {
		printf("p1 is NULL");
}
if (!p1 || !p)
	return (0);
  for (int i = 0; i < 10 ; i++)
  {
	printf("P:(%d:%d)\n",i, p[i]);
	printf("P1:(%d:%d)\n-------\n",i, p1[i]);
  }
  return (0);

}*/
