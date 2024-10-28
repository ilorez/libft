/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:23:41 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/27 17:33:17 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdlib.h"
#include "stdio.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = 0;
	if (dstsize)
	{
		while (src[len] && --dstsize)
		{
			dst[len] = src[len];
			len++;
		}
		dst[len] = '\0';
	}
	while (src[len])
	{
		len++;
	}
	return (len);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	
	size_t	size;
	char	*ss;
	size_t	s_len;


	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		len = 0;
	size = 0;
	while (size < (len) && s[size + start])
		size++;
	ss = (char *)malloc(size * sizeof(char) + 1);
	if (!ss)
		return (NULL);
	ft_strlcpy(ss, (s + start), size + 1);
	return (ss);
}

/*int main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("%s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
		// original function
		// printf("%s\n", substr(av[1], atoi(av[2]), atoi(av[3])));
	}
	return (0);
}*/
