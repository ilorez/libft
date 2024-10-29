/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:37:03 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/24 16:10:24 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*udst;
	char	*usrc;

	if (!dst || !src)
		return (NULL);
	udst = (char *)dst;
	usrc = (char *)src;
	i = -1;
	while (++i < n)
		*(udst + i) = *(usrc + i);
	return (dst);
}
