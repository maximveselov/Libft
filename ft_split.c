/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aannett <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:22:44 by aannett           #+#    #+#             */
/*   Updated: 2020/11/20 21:23:24 by aannett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_split_count(const char *s, int c)
{
	unsigned int	i;
	unsigned int	j;

	i = 1;
	j = 0;
	while (s[j] && s[j] == c)
		j++;
	while (s[j])
	{
		if (s[j] == c && s[j + 1] != c && s[j + 1])
			i++;
		j++;
	}
	return (i);
}

static unsigned int	ft_get_first_ind(const char *s, int c, unsigned int j)
{
	unsigned int	i;

	i = j;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
			break ;
	}
	return (i);
}

static unsigned int	ft_get_last_ind(const char *s, int c, unsigned int j)
{
	unsigned int	i;

	i = j;
	while (s[i])
	{
		if (s[i] != c)
			i++;
		else
			break ;
	}
	return (i);
}

static char			**ft_clear_slot(char **arr)
{
	unsigned int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char				**ft_split(const char *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			**ret;

	if (!s)
		return (NULL);
	if (!(ret = malloc(sizeof(char*) * (ft_split_count(s, c) + 1))))
		return (NULL);
	j = 0;
	i = 0;
	while (i < ft_split_count(s, c))
	{
		k = ft_get_first_ind(s, c, j);
		j = ft_get_last_ind(s, c, k);
		if (!(ret[i] = malloc(sizeof(char) * (j - k + 1))))
			return (ft_clear_slot(ret));
		if (k == j)
			break ;
		ret[i++] = ft_substr(s, k, j - k);
	}
	ret[i] = NULL;
	return (ret);
}
