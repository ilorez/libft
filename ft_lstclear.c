/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:15:17 by znajdaou          #+#    #+#             */
/*   Updated: 2024/11/01 10:05:39 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		printf("2");
		cur = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = cur;
	}
	printf("3");
	*lst = (NULL);
}

/*void example_del(void *content)
{
  free(content);
}

int	main(void)
{
  t_list *lst;
  t_list *lst2;
  t_list *lst3;


  printf("0");
  lst = ft_lstnew(ft_strdup("hello"));
  lst2 = ft_lstnew(ft_strdup("hello1"));
  lst3 = ft_lstnew(ft_strdup("hello2"));
  lst->next = lst2;
  lst2->next = lst3;

  printf("1");
  ft_lstclear(&lst, &example_del);

  printf("4");
  // test if lst is empty
  if (lst == NULL)
	printf("list is empty");
  return (0);

}*/
