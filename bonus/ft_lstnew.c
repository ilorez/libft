/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:52:48 by znajdaou          #+#    #+#             */
/*   Updated: 2024/10/31 10:56:59 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{		
	t_list *node;
	
  node = (t_list *)malloc(sizeof(t_list));
	if (!node)
    return (NULL);
  node.conntent = content;
	node.next = NULL;
	return node;
}


int main()
{
  t_list *node = ft_lstnew(NULL);
  //printf("%s\n", (char *)node->content);
  return (0);
}