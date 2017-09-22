/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:04:28 by mosborne          #+#    #+#             */
/*   Updated: 2017/09/20 17:25:45 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

char	*ft_strcat(char *s1, char *s2)
{
	int i;

	i = ft_strlen(s1);
	while (s2[i])
		s1[i++] = *s2++;
	s1[i] = '\0';
	return (s1);
}
