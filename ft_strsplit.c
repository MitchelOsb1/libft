/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 19:37:57 by mosborne          #+#    #+#             */
/*   Updated: 2017/10/04 16:52:34 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_memsize(char const *str, char c)
{
	int i;
	int count;
	int toggle;

	toggle = 0;
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			toggle = 0;
		else if (!toggle && str[i])
		{
			toggle = 1;
			count++;
		}
		i++;
	}
	return (count += 1);
}

int    ft_strsubcount(char const *s, int index, char c)
{
	int i;

	i = 0;
	while (s[index] != c && s[index])
	{
		index++;
		i++;
	}
	return (i);
}

char    **ft_strsplit(char const *s, char c)
{
	int y;
	int x;
	int i;
	char **new;

	x = 0;
	i = 0;
	new = (char **)malloc((ft_memsize(s, c)) * sizeof(char *));
	if (!new || !ft_memsize(s, c))
		return (NULL);
	while (s[i])
	{
		y = 0;
		while (s[i] == c)
			i++;
		new[x] = (char *)malloc(sizeof(char) * (ft_strsubcount(s, i, c)));
		while (s[i] != c && s[i])
			new[x][y++] = s[i++];
		new[x][y] = '\0';
		x++;
	}
	return (new);
}