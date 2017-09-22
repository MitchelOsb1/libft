/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:16:53 by mosborne          #+#    #+#             */
/*   Updated: 2017/09/21 13:14:10 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strstr(const char *big, const char *little)
{
    int x;
    int i;

    i = 0;
    if (little ==0)
       return ((char *)big);
    while (big[i])
    {
        x = 0;
        while (big[i] == little[x] && big[i])
        {
            i++;
            x++;
        }
        if (!little[x])
            return ((char *)&big[i - x]);
        i++;
    }
    return (NULL);
}

int main(void)
{
    char string[55] = "This is a test string for testing";
    
    printf("%s", strstr(string, "for"));
    printf("%c", '\n');
    printf("%s", ft_strstr(string, "for"));
}