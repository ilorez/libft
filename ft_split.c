/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:51:59 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/29 18:32:49 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static int	_ft_c_ws(char *str, char *seps)
{
	int	i;
	int	w;

	w = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], seps))
			i++;
		if (str[i])
			w++;
		while (str[i] && !ft_is_sep(str[i], seps))
			i++;
	}
	return (w);
}

char **ft_split(char const *s, char c)
{
  char	**strings;
	char	*word;
	char	*start;
	int		i;

	i = 0;
  const char *c_str[] = {c, '\0'} 
  char *str = ft_strtrim(s, c_str);
	strings = (char **)malloc(sizeof(char *) * (_ft_c_ws(str, charset) + 1));
  // go word by word and allocate a place for it if didn't allocated run free function

  // use split of pecine 
  // you should frees so create function for freeying a array that stop on found null

  printf(str)
}



