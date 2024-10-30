/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:06:37 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/27 14:54:35 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

	// includes
	#include <stdlib.h>
	#include <stdio.h>
	
	// memory functions
	void	*ft_memset(void *b, int c, size_t len); // this function is for setting a memory block to a specific value
	void	ft_bzero(void *s, size_t n); // this function is for setting a memory block to zero
	void	*ft_memcpy(void *dst, const void *src, size_t n); // this function is for copying a memory block to another memory block
	void	*ft_memmove(void *dst, const void *src, size_t len); // this function is for copying a memory block to another memory block
	void	*ft_memchr(const void *s, int c, size_t n); // this function is for searching for a character in a memory block
	int	ft_memcmp(const void *s1, const void *s2, size_t n); // this function is for comparing two memory blocks
	void	*ft_calloc(size_t count, size_t size); // this function is for allocating memory and setting it to zero

	// string functions
	size_t	ft_strlen(const char *s);
	char	*ft_strchr(const char *s, int c); // this function is for 
	char	*ft_strrchr(const char *s, int c); 
	char	*ft_strnstr(const char *haystack, const char *needle, size_t len); // this function is for searching for a substring in a string
	int	ft_strncmp(const char *s1, const char *s2, size_t n); // this function is for comparing two strings
	size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); // this function is for copying a string to another string
	size_t	ft_strlcat(char *dst, const char *src, size_t size); // the difference between strlcat and strlcpy is that strlcat append the src to dst and strlcpy copy the src to dst
	char	*ft_strdup(const char *s1); // this function is for duplicating a string
	char	*ft_substr(char const *s, unsigned int start, size_t len); // this function is for extracting a substring from a string

	// is functions
	int	ft_isalpha(int c); 
	int	ft_isdigit(int c);
	int	ft_isalnum(int c);
	int	ft_isascii(int c);
	int	ft_isprint(int c);

	// to functions
	char	ft_toupper(int c);
	char	ft_tolower(int c);

	// atoi functions
	int	ft_atoi(const char *nptr);


#endif
