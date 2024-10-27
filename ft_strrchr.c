/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:20:43 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/25 15:42:42 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "stdio.h"
//#include "string.h"

/*size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (s[len] != c && len)
		len--;
	if (s[len] != c)
		return (NULL);
	return ((char *)(&(s[len])));
}

/*int main(int ac, char **av)
{
	printf("str:%s\nhere is it:%p\n", av[1], ft_strrchr(av[1], '\0'));
	printf("str:%s\nhere is it:%p\n", av[1], strrchr(av[1], '\0'));
	//char *res = ft_strchr(av[1], (int)av[2][0]);
	//*res = 'W';
	//printf("new str:%s\n", av[1]);
	return (ac);
}*/
