/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:02:38 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/27 12:06:56 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

/*size_t	ft_strlen(const char *s)
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
	char	*dst;
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
}*/
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

/*int main(int ac, char **av)
{
	char *str = ft_strdup((const char *)av[1]);
	printf("str:%s\ncpy:%s\n", av[1], str);
	return (ac);
}*/
