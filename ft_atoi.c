/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:27:57 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/27 09:22:14 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	_ft_isspace(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	size_t				i;
	int					signe;
	unsigned long long	re;

	i = 0;
	signe = 1;
	re = 0;
	while (_ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			signe = -1;
	while (ft_isdigit(nptr[i]))
		re = re * 10 + (nptr[i++] - 48);
	return ((int)(re * signe));
}

/*int main(int ac, char   **av)
{
	if (ac == 2)
	{
		int res = atoi(av[1]);
		printf("atoi: %d\n", res);
		int res1 = ft_atoi(av[1]);
		printf("ft_atoi: %d\n", res1);
	}
	return (0);
}*/
