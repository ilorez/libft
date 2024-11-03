/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:28:45 by znajdaou          #+#    #+#             */
/*   Updated: 2024/11/03 09:40:24 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	unsigned char	*udst;
	const unsigned char	*usrc;

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
	char str[] = "00123456";
  void *str1 = (void *)0;
  void *str2 = (void *)0;
  //char *str1 = ft_strdup("hello");
  //char *str2 = ft_strdup("hello");
	//char *my_dst;
	//char *my_str;

	//my_dst = (str );
  //my_str = str + 2;
  //ft_memmove(str1 ,str2,3 );
	printf("original: %s\nafter Edit: %s", str, (char *)memmove(str1 ,str2, 5));
}*/
