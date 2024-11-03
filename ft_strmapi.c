/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:58:19 by znajdaou          #+#    #+#             */
/*   Updated: 2024/11/03 12:40:18 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	i = -1;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (++i < len)
		str[i] = (*f)(i, s[i]);
	str[i] = '\0';
	return (str);
}

/*char _ft_toupper(unsigned int i, char c)
{
  if (i % 2)
	return (c - 32);
  return (c);
}
int	main(int ac, char **av)
{
  if (ac == 2)
		printf("%s\n", ft_strmapi(av[1], &_ft_toupper));
	printf("null function: %s\n", ft_strmapi(av[1], NULL));
	printf("null string: %s\n", ft_strmapi(NULL, &_ft_toupper));
  return (0);
}*/
