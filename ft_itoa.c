/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aannett <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 02:44:12 by aannett           #+#    #+#             */
/*   Updated: 2020/11/18 02:44:40 by aannett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0 || n < 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*r;
	int		l;
	long	i;

	i = n;
	l = ft_numlen(i);
	if (n == 0)
		return (ft_strdup("0"));
	if (!(r = (char*)malloc(sizeof(char) * (l + 1))))
		return (NULL);
	if (i < 0)
	{
		i *= -1;
		r[0] = '-';
	}
	r[l--] = '\0';
	while (i > 0)
	{
		r[l--] = i % 10 + 48;
		i = i / 10;
	}
	return (r);
}
