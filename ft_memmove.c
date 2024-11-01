/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:28:45 by znajdaou          #+#    #+#             */
/*   Updated: 2024/11/01 18:44:38 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*udst;
	char	*usrc;

	udst = (char *)dst;
	usrc = (char *)src;
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
  //char *str1 = NULL;
  //char *str1 = ft_strdup("hello");
  //char *str2 = NULL;
  //char *str2 = ft_strdup("hello");
	char *my_dst;
	char *my_str;

	my_dst = (str );
  my_str = str + 2;
  //ft_memmove(str1 ,str2,3 );
	printf("original: %s\nafter Edit: %s", str, (char *)memmove(my_dst ,
			my_str,4 ));
}*/
