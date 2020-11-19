/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aannett <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:57:38 by aannett           #+#    #+#             */
/*   Updated: 2020/11/19 15:44:50 by aannett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!*needle)
		return ((char*)haystack);
	while (*haystack)
	{
		if (!ft_strncmp(haystack, needle, ft_strlen(needle))
			&& i + ft_strlen(needle) <= len)
			return ((char*)haystack);
		else if (i + ft_strlen(needle) > len)
			break ;
		haystack++;
		i++;
	}
	return (NULL);
}
