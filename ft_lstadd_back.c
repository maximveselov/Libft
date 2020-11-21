/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aannett <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:36:00 by aannett           #+#    #+#             */
/*   Updated: 2020/11/20 14:54:03 by aannett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *add)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = add;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = add;
	last->next->next = NULL;
}
