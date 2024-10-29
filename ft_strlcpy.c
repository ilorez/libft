/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:18:51 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/25 10:12:19 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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

/*int main(int ac, char **av)
{
	size_t	dstlen;
	char	str2[dstlen];
	char	str3[dstlen];
	size_t	len;
	size_t	len_original;

	dstlen = atoi(av[2]);
	len = ft_strlcpy(str2, av[1], dstlen);
	len_original = strlcpy(str3, av[1], dstlen);
	printf ("str: %s,\nstrlcpy:%s", av[1], str2);
	printf ("original ------\nstr: %s,\nstrlcpy:%s", av[1], str3 );
	return (ac);
}
*/
