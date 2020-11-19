/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aannett <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:55:55 by aannett           #+#    #+#             */
/*   Updated: 2020/11/17 14:53:48 by aannett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char s)
{
	if (s == '\t' || s == '\v' || s == '\r'
		|| s == '\n' || s == '\f' ||
		s == '\b' || s == ' ')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	long int	ret;
	int			sign;

	ret = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while ((*str >= '0' && *str <= '9'))
	{
		ret *= 10;
		ret += *str - '0';
		str++;
	}
	if (ret * sign < -2147483648 || ret * sign > 2147483647)
		return (-1);
	return (((int)ret) * sign);
}
