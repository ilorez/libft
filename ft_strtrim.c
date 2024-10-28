/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:21:59 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/28 10:43:24 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	if (s[i] != c)
		return (NULL);
	return ((char *)(&(s[i])));
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

// funciton for test if current caracter in set or not
char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char *start;
	char *dst;

	
	start = NULL;
	while (s1[i])
	{
		j=0;
		while (s1[i+j] && ft_strchr(set,(int) s1[i + j]) )
			j++;
		if(s[i])
			i += j + 1;
		if (!start)
			start = s1[i - 1];
	}
	// print size will be alocated
	printf("size(i):%d\n", i);
	dst = malloc(+1);
	if (!dst)
		return (NULL);
	strlcpy(dst, start	
	
	
		
}
