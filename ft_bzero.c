/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:21:36 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/24 15:58:49 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "stdio.h"
//#include "stdlib.h"

/*static void	*_ft_memset(void *b, int c, size_t len)
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
}*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	char(*str) = "hello world";
	ft_bzero(str, 48, 5);
	printf("str: %s\n", str);
}*/
