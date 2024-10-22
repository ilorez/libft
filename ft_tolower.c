/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:54:27 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/22 09:58:33 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "unistd.h"

char	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*int	main(int c, char **v)
{
	int	nc;

	while (--c)
	{
		nc = ft_tolower(v[c][0]);
		write(1, &nc, 1);
	}
}*/
