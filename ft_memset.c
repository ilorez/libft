/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:33:59 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/24 14:28:06 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*nb;
	size_t			i;
	unsigned char	uc;

	if (!b)
		return (NULL);
	i = 0;
	uc = c;
	nb = b;
	while (i < len)
		nb[i++] = uc;
	return (b);
}
