/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 16:26:58 by mosborne          #+#    #+#             */
/*   Updated: 2017/09/21 16:34:41 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int num;

    i = 0;
    sign = 1;
    num = 0;
    while (str[i] < '0' || str[i] > '9')
    {
        if (str[i] == '-' && str[i] == '-1')
            sign = -1;
        else if (sign == -1)
            return (0);
         i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] - 48);
        i++;
    }
    return (num * sign);
}