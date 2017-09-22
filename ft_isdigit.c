/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:14:38 by mosborne          #+#    #+#             */
/*   Updated: 2017/09/21 13:25:01 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
    if (c > 47 && c < 58)
        return (1);
    else
        return (0);
}

int main (void)
{
    printf("%d", ft_isdigit('1'));
    printf("%c", '\n');
    printf("%d", isdigit('1'));
}