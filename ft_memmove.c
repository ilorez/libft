/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:28:45 by znajdaou          #+#    #+#             */
/*   Updated: 2024/11/08 15:50:46 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*udst;
	const unsigned char	*usrc;

  if (dst == src)
    return (dst);
	if (!dst && !src)
		return (NULL);
	udst = (unsigned char *)dst;
	usrc = (const unsigned char *)src;
	i = -1;
	if (udst > usrc)
		while (++i < len)
			*(udst + len - i - 1) = *(usrc + len - i - 1);
	else
		while (++i < len)
			*(udst + i) = *(usrc + i);
	return (dst);
}

/*int main()
{
  //char str1[] = "hi";
  char *str1 = "hi";
	printf("edit: %s\n", (char *)memmove(str1+1 ,str1, 2));
	//printf("original: %s\nafter Edit: %s", str, (char *)memmove(str1 ,str2, 5));
}*/
