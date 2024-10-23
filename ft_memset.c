/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:33:59 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/23 08:53:03 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdlib.h"
void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *uc;
	size_t i;

	i=0;
	uc = b;
	while (i < len)
		uc[i++] = c;
	return b;
}

