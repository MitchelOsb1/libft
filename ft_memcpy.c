/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 14:44:14 by mosborne          #+#    #+#             */
/*   Updated: 2017/09/21 18:04:41 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *s = (char *)src;
    char *d = (char *)dst;
    unsigned int i;

    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (d);
}

int main(void)
{
    char a[64] = "swagboimaster";
    char b[64];
    char aa[64] = "swagboimaster";
    char bb[64];

    printf("%s\n", ft_memcpy(b, a, 6));
    printf("%s\n", memcpy(bb, aa, 6));
}