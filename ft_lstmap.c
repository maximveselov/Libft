/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aannett <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:52:09 by aannett           #+#    #+#             */
/*   Updated: 2020/11/21 18:04:12 by aannett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*head;
	t_list	*node;

	head = NULL;
	while (lst)
	{
		if (!(node = ft_lstnew((*f)(lst->content))))
		{
			while (head)
			{
				node = head->next;
				(*del)(head->content);
				free(head);
				head = node;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
