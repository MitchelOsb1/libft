/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 14:02:33 by mosborne          #+#    #+#             */
/*   Updated: 2017/09/21 12:31:46 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void    *ft_memset(void *str, int c, size_t n)
{
    char* p = (char *)str;
    unsigned int i;

    i = 0;
    if (str == '\0')
        return (0);
    while (i < n)
    {
        p[i] = c;
        i++;
    }
    return (p);
}

int main(void)
{
    char str[7] = "string";

    printf("%s", ft_memset(str, '.', 3));
    printf("%s", memset(str, '.', 3));
}