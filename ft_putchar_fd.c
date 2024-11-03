/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:54:16 by znajdaou          #+#    #+#             */
/*   Updated: 2024/11/03 12:47:46 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd != -1)
		write(fd, &c, 1);
}

/*int main (void)
{
  // example for standard output
  ft_putchar_fd('c', 2);
  // example for file
  int fd = open("file.txt", O_WRONLY | O_CREAT );
  ft_putchar_fd('c', fd);
  // example for standard input
  ft_putchar_fd('c', 0);
  // example for standard error
  ft_putchar_fd('c', 1);
  return (0);
}*/
