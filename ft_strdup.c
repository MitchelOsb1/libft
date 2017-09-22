/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 13:44:51 by mosborne          #+#    #+#             */
/*   Updated: 2017/09/19 17:01:22 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int i;
	char *x;

	i = 0;
	while (str)
		i++;
	x = (char *)malloc(sizeof(*str));
	while (str)
	{
		x[i] = str[i];
		i++;
	}
	return (x);
}
