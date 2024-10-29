/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:21:59 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/28 10:43:24 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	pre;
	size_t	suf;
	size_t	len;

	pre = 0;
	suf = 0;
	len = ft_strlen(s1);
	while (s1[pre])
	{
		if (ft_strchr(set, s1[pre]))
			pre++;
		else
			break ;
	}
	while (suf < len)
	{
		if (ft_strchr(set, s1[len - suf - 1]))
			suf++;
		else
			break ;
	}
	if ((pre + suf) > len)
		return (ft_substr(s1, pre - 1, 0));
	len = len - pre - suf;
	return (ft_substr(s1, pre, len));
}

/*int main(int argc, char *argv[])
{
  if (argc == 3)
  {
	printf("ft_strtrim:%s\n", ft_strtrim(argv[1], argv[2]));
  }
  return (EXIT_SUCCESS);
}*/
