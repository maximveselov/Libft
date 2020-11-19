/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aannett <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:02:42 by aannett           #+#    #+#             */
/*   Updated: 2020/11/17 14:56:52 by aannett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	i;

	s = (size_t)ft_strlen(src);
	d = (size_t)ft_strlen(dst);
	i = 0;
	if (size == 0)
		return (s);
	else if (size <= d)
		return (s + size);
	size--;
	while (src[i] != '\0' && (size - d))
	{
		dst[d + i] = src[i];
		i++;
		size--;
	}
	dst[d + i] = '\0';
	return (s + d);
}
