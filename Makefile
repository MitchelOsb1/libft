# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/26 19:04:18 by mosborne          #+#    #+#              #
#    Updated: 2017/10/02 16:12:51 by mosborne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

FLAGS = -Wall -Wextra -Werror

SRCS = ft_isalnum.c ft_memcpy.c ft_strcpy.c ft_tolower.c ft_isalpha.c ft_memmove.c ft_strdup.c ft_toupper.c ft_isascii.c ft_memset.c ft_strlen.c ft_isdigit.c ft_strcat.c ft_strncat.c ft_atoi.c ft_isprint.c ft_strchr.c ft_strrchr.c ft_bzero.c ft_memccpy.c ft_strcmp.c										ft_strstr.c ft_memchr.c ft_memcmp.c ft_strncpy.c ft_strlcat.c ft_strnstr.c ft_strncmp.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c

OBJS = ft_isalnum.o ft_memcpy.o ft_strcpy.o ft_tolower.o ft_isalpha.o ft_memmove.o ft_strdup.o ft_toupper.o ft_isascii.o ft_memset.o ft_strlen.o ft_isdigit.o ft_strcat.o ft_strncat.o ft_atoi.o ft_isprint.o ft_strchr.o ft_strrchr.o ft_bzero.o ft_memccpy.o ft_strcmp.o										ft_strstr.o ft_memchr.o ft_memcmp.o ft_strncpy.o ft_strlcat.o ft_strnstr.o ft_strncmp.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o

all: $(NAME)

$(NAME): 
	gcc $(FLAGS) -c $(SRCS) -I $(HEADER)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	
clean:
	rm -rf $(OBJS)

fclean: clean 
	rm -rf $(NAME)

re: fclean all