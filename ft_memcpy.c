/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:37:03 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/24 09:30:32 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdlib.h"
#include "stdio.h"
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char *udst;
	char *usrc;

	udst = (char *)dst;
	usrc = (char *)src;
	if (!dst || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(udst + i) = *(usrc + i);
		i++;
	}
	return (dst);
}


int main ()
{
	char str[] = {255, '\0'} ;
	char *str2[1];
	char *r =  (char *)ft_memcpy(str2, str, 1);
	printf("str1:%s\nstr2 as digit:%d\n str2 as str:%s\n", str,r[0],r) ;

}
