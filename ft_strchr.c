/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 16:33:27 by mosborne          #+#    #+#             */
/*   Updated: 2017/09/20 17:18:53 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char    *ft_strchr(const char *str, int c){
    int i;

    i = 0;
    while (*str)
    {
        if (*str == c)
            return ((char *)str);
        if (!c)
            return(NULL);
        str++;
    }
    return (0);
}

int main()
{
    printf("%s\n", ft_strchr("asdbasdjhasbd", 'z'));
    printf("%s\n", strchr("assdazasdsd", 'z'));
    return (0);
}