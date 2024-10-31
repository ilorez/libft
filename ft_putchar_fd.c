/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:54:16 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/30 16:04:03 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
  write(fd, &c, 1);
  // that mean write the character c to the file descriptor fd with a size of 1 byte
  // 1 byte because the size of a character is 1 byte
  // fd example valuse : 0 for standard input, 1 for standard output, 2 for standard error
  // how to call function  for write on a file : ft_putchar_fd('c', fd);
  // where fd is the file descriptor of the file
  // if file called file.txt : fd = open("file.txt", O_WRONLY);
  // O_WRONLY is a flag that mean open the file in write only mode
  // look to example below in main
}

/*int main (void)
{
  // example for standard output
  ft_putchar_fd('c', 2);
  // example for file
  //int fd = open("file.txt", O_WRONLY);
  //ft_putchar_fd('c', fd);
  // example for standard input
  ft_putchar_fd('c', 0);
  // example for standard error
  ft_putchar_fd('c', 1);
  return (0);
}*/
