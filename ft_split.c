/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:51:59 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/29 13:09:41 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char **ft_split(char const *s, char c)
{
  const char *c_str[] = {c, '\0'} 
  char *str = ft_strtrim(s, c_str);
  // use split of pecine 
  // get count words for split of pecine and set it as static function
  // you should frees so create function for freeying a array that stop on found null

  printf(str)
}


