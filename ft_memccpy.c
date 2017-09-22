/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 16:38:33 by mosborne          #+#    #+#             */
/*   Updated: 2017/09/21 17:59:54 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include <stdio.h>

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    char *x = (char *)src;
    char *y = (char *)dst;
    unsigned int i;

    i = 0;
    while (n-- > 0)
    {
        if (c == x[i])
            return (&x[i + 1]);
        y[i] = x[i];
        i++;
    }
    return (NULL);
}

int main(void)
{
    char a[64] = "swagboimaster";
    char b[64];
    char aa[64] = "swagboimaster";
    char bb[64];

    printf("%s\n", ft_memccpy(b, a, 'g', 4));
    printf("%s\n", memccpy(bb, aa, 'g', 4));
}