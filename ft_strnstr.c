/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:39:18 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/27 08:32:47 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "string.h"
//#include "stdlib.h"
//#include "stdio.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[i])
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (!needle[j + 1])
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main(int ac, char **av)
{
	char *f_at = ft_strnstr((const char *)av[1], (const char *)av[2],
			atoi(av[3]));
	char *o_f_at = strnstr((const char *)av[1], (const char *)av[2],
			atoi(av[3]));
	printf("str1: %s\nstr2: %s\nfounded at:%s\noriginal founded at:%s\n", av[1],
		av[2], f_at, o_f_at);
	return (ac);
}*/
