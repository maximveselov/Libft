/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aannett <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:55:57 by aannett           #+#    #+#             */
/*   Updated: 2020/11/17 14:55:59 by aannett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ret;
	size_t			i;

	ret = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		ret[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
