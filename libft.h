/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 16:25:12 by mosborne          #+#    #+#             */
/*   Updated: 2017/09/22 17:25:35 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memccpy(void *dst, void *src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_strlen(char *s1);
char *ft_strdup (char *s1);
char *ft_strcpy (char *dst, char *src);
char *ft_strncpy(char *dst, char *src, int size);
char *ft_strcat(char *s1, char *s2);
char *ft_strncat(char *s1, char *s2, size_t num);
size_t ft_strlcat(char *dst, const char *src, size_t size);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strstr(const char *big, const char *little);
char *ft_strnstr(const char *big, const char *little, size_t n);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(char *str);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);

#endif