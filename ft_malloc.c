/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:02:24 by znajdaou          #+#    #+#             */
/*   Updated: 2024/12/30 16:02:34 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_adr_info
{
  void *adr;
  int  tag;
  void* (*del)(void*);
} t_adr_info;

void *ft_malloc(size_t  size, t_list  **list, int tag, void (*del)(void *))
{
  void *ptr;
  t_list *newnode;
  t_adr_info *adr_info;

  if (!del || !list)
    return (NULL);
  ptr = ft_calloc(1, size);
  if (!ptr)
    return (NULL);
  adr_info = ft_calloc(sizeof(t_adr_info));
  adr_info->adr = ptr;
  adr_info->tag = tag;
  adr_info->del = del;
  newnode = ft_lstnew(adr_info);
  if (!newnode)
    return (free(ptr), NULL);
  ft_lstadd_back(list, newnode);
  return (ptr);
}

t_bool ft_freeTag(t_list  **lst, int tag)
{
  t_adr_info  *adr_info;
  t_list *tmp;

  if (!list)
    return ;
  while (true && *lst)
  { 
    adr_info = (t_adr_info)((*lst)->content);
    if (adr_info->tag == tag)
    {
      adr_info->del(adr_info->adr);
      tmp = *lst;
      *lst = (*lst)->next;
    }
    
  }
}

ft_free_all_tags(t_list **lst)
{

}
