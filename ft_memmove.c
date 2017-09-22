/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 18:06:21 by mosborne          #+#    #+#             */
/*   Updated: 2017/09/21 19:09:54 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include <stdio.h>

void    *memmove(void *dst, const void *src, size_t len)
{
    char *x = (char *)src;
    char *y = (char *)dst;
    size_t i;

    i = 0;
    if (dst > src)
    {
        while (dst)
        x[i] = y[i - 1];
    }
}

int main(void)
{
    char s1[6] = "string";
    char s2[6] = "string";

    printf("%s", memmove())
}