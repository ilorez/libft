/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:45:14 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/22 11:57:31 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "unistd.h"

int	ft_isalpha(int c)
{
	if (c < 65 || c > 122 || (c > 90 && c < 97))
		return (0);
	return (1);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*int	main(int c, char **v)
{
	int	nc;

	while (--c)
	{
		nc = ft_isalnum(v[c][0]) + 48;
		write(1, &nc, 1);
	}
}*/
