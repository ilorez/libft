/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:21:36 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/23 10:33:55 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

static void	*_ft_memset(void *b, int c, size_t len)
{
	char			*nb;
	size_t			i;
	unsigned int	uc;

	i = 0;
	uc = c;
	nb = b;
	while (i < len)
		nb[i++] = uc;
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	_ft_memset(s, 0, n);
}
