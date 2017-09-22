/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:33:58 by mosborne          #+#    #+#             */
/*   Updated: 2017/09/21 16:24:58 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_strlen(char *str);

char	*ft_strncat(char *s1, char *s2, size_t num)
{
	unsigned int i;
	int x;

	i = ft_strlen(s1);
	x = 0;
	while (i < num)
		s1[i++] = s2[x++];
	s1[i] = '\0';
	return (s1);
}
