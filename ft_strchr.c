/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:42:48 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/25 15:19:47 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


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

/*int main(int ac, char **av)
{
	printf("str:%s\nhere is it:%s\n", av[1], ft_strchr(av[1], (int)av[2][0]));
	printf("str:%s\nhere is it:%s\n", av[1], strchr(av[1], (int)av[2][0]));
	char *res = ft_strchr(av[1], (int)av[2][0]);
	*res = 'W';
	printf("new str:%s\n", av[1]);
	return (ac);
}
*/
