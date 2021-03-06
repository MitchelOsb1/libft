/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 15:24:15 by mosborne          #+#    #+#             */
/*   Updated: 2017/10/18 11:28:42 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iswhitespace(char *str)
{
	while (*str)
	{
		if ((*str == ' ') || (*str == '\t') || (*str == '\n') ||
			(*str == '\v') || (*str == '\f') || (*str == '\r'))
			return (1);
	}
	return (0);
}
