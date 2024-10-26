/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:57:59 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/26 15:10:20 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "stdlib.h"
//#include "stdio.h"

static int _ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int _ft_isspace(int c)
{
  if (c == 32 || (c >= 9 && c <= 13))
    return (1);
  return (0);
}

int ft_atoi(const char *nptr)
{
  size_t i;
  int signe;
  unsigned long long re;
  unsigned long long  max = 9223372036854775807;
  
  i = 0;
  signe = 1;
  re = 0;
  while (_ft_isspace(nptr[i]))
    i++;
  if (nptr[i] == '-' || nptr[i] == '+')
  {
    if (nptr[i] == '-')
      signe = -1;
    i++;
  }
  while (_ft_isdigit(nptr[i]))
  {
    re = re * 10 + (nptr[i] - 48);    
    if (re > max)
    {
      if (signe == 1)
        return (int)(-1);
      else
        return (int)(0);
    }
    i++;
  }

  return (int)(re * signe);
    
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
