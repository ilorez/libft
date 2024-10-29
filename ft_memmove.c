/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:28:45 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/24 15:57:22 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*udst;
	char	*usrc;

	if (!dst || !src)
		return (NULL);
	udst = (char *)dst;
	usrc = (char *)src;
	i = -1;
	while (++i < len)
		*(udst + len - i - 1) = *(usrc + len - i - 1);
	return (dst);
}

/*int main()
{
	char str[] = "abcdef";
	char *my_dst;
	my_dst = (str + 2);
	printf("original: %s\nafter Edit: %s", str, (char *)memmove(my_dst ,
			str,3 ));
}*/
