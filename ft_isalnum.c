/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:25:35 by mosborne          #+#    #+#             */
/*   Updated: 2017/09/21 13:45:48 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    if (c >= 'a' && c <= 'z')
        return (1);
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (2);
}

int main(void)
{
    printf("%d", isalnum('b'));
    printf("%c", '\n');
    printf("%d", ft_isalnum('b'));
}