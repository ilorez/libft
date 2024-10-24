/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 07:58:28 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/22 09:52:24 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "unistd.h"

char	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*
int	main(int c, char **v)
{
	int	nc;

	while (--c)
	{
		nc = ft_toupper(v[c][0]);
		write(1, &nc, 1);
	}
}*/
