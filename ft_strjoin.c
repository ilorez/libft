/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:43:27 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/27 18:57:50 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "stdio.h"
#include "string.h"
#include "stdlib.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

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

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dst;
	
	len = ft_strlen(s1) + 1;
	dst = (char *)malloc(len);
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, len);
	return (dst);
}

static void	_ft_strncat(char *dest, const char *src, size_t nb, size_t dl)
{
	size_t	j;

	j = 0;
	while (src[j] && j < nb)
	{
		dest[dl + j] = src[j];
		j++;
	}
	dest[dl + j] = '\0';
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_p_src_len;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	dest_p_src_len = dest_len + src_len;
	if (size <= dest_len)
		return (size + src_len);
	_ft_strncat(dst, src, (size - dest_len - 1), dest_len);
	return (dest_p_src_len);
}

char *ft_strjoin1(char const *s1, char const *s2)
{
	char *dst;
	size_t	size;
	
	size = 1;
	if (s1)
		size += ft_strlen(s1);
	if (s2)
		size += ft_strlen(s2);
	dst = malloc(size);
	if (!dst)
		return (NULL);
	if (s1)
		ft_strlcpy(dst, s1, size); 
	if (s2)
		ft_strlcat(dst, s2, size);
	if (!s1 && !s2)
		dst[0] = '\0';
	return (dst);
}*/

char *ft_strjoin(char const *s1, char const *s2)
{
	char *dst;
	size_t	size;
	
	if (s1 && !s2)
		return ft_strdup(s1);
	if (!s1 && s2)
		return ft_strdup(s2);
	if (!s1 && !s2)
		return ft_strdup("");
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	dst = malloc(size);
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, size); 
	ft_strlcat(dst, s2, size);
	return (dst);
}

/*int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s\n", ft_strjoin(av[1], av[2]));
		printf("%s\n", ft_strjoin(av[1], NULL));
		printf("%s\n", ft_strjoin(NULL, av[2]));
		printf("%s\n", ft_strjoin(NULL, NULL));
		// strjoin1 
		printf("strjoin1-----\n:%s\n", ft_strjoin1(av[1], av[2]));
		printf("%s\n", ft_strjoin1(av[1], NULL));
		printf("%s\n", ft_strjoin1(NULL, av[2]));
		printf("%s\n", ft_strjoin1(NULL, NULL));

	
	}
	return (0);
}*/
