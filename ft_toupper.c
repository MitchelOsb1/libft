/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 14:31:14 by mosborne          #+#    #+#             */
/*   Updated: 2017/09/21 14:41:31 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (0);
}

int main(void)
{
    printf("%c", toupper('A'));
    printf("%c", '\n');
    printf("%c", 'c');
    printf("%c", ft_toupper('A'));
}