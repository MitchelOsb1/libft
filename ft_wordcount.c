/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 12:41:53 by mosborne          #+#    #+#             */
/*   Updated: 2017/10/18 11:30:28 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char *str, char c)
{
	int i;
	int x;
	int y;

	i = 0;
	y = 0;
	x = 0;
	while (str[i])
	{
		if (str[i] != c)
			if (x == 0)
				y++;
			else
				x = 1;
		else
			x = 0;
		i++;
	}
	return (y);
}
