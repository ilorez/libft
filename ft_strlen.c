/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:18:38 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/23 08:31:47 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "stdio.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* int main(int c, char **av)
{
	printf("%zu", ft_strlen(av[c*0 + 1]));
}*/
