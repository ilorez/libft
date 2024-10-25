/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:30:18 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/25 19:53:55 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "stdio.h"
//#include "string.h"
//#include "stdlib.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s2[i] || s1[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int main(int ac, char **av)
{
	printf("str1:%s\nstr2:%s\nretuned:%d\n", av[1], av[2], ft_strncmp(av[1],
			av[2], atoi(av[3])));
	return (ac);
}*/
