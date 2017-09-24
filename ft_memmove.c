/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   Bsrc: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 18:06:21 bsrc mosborne          #+#    #+#             */
/*   Updated: 2017/09/22 19:59:53 bsrc mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include <stdio.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

    if (dst > src)
    {
        i = len;
        printf("THis is here\n");
        while(i-- > 0)
            ((char *)dst)[i] = ((char *)src)[i];
    }
    else
    {
        i = 0;
        while (i < len)
        {
            printf("I: %zu\n", i);
            ((char *)dst)[i] = ((char *)src)[i];
            i++;
        }
        ((char *)dst)[i] = '\0';
    }
    return (dst);
}

int main(void)
{
    char a[64] = "swagboimaster\0";
    char b[64];
    char aa[64] = "swagboimaster\0";
    char bb[64];


    printf("%s\n", memmove(bb, aa, 8));
        printf("%s %s\n", ft_memmove(b, a, 8), b);
}