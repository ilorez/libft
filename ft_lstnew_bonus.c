/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:52:48 by znajdaou          #+#    #+#             */
/*   Updated: 2024/11/07 15:35:17 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*int main()
{
  t_list *node = ft_lstnew(NULL);
  //ft_lstnew(NULL);
  printf("%p\n",(void *)node->content);
  return (0);
}*/

/*
#include <stdio.h>

int	main(void)
{
	t_list	*node1;
	int		content1[2];

	content1[0] = 42;
	content1[1] = 442;
	// Example 1: Node with an integer
	node1 = ft_lstnew(content1);
	printf("Node 1 content (int): %d\n", ((int *)(node1->content))[0]);
	printf("Node 1 next: %p\n\n", (void *)node1->next);
}
*/
