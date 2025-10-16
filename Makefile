# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tseche <tseche@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 23:39:11 by tseche            #+#    #+#              #
#    Updated: 2025/10/16 18:28:03 by tseche           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC	= cc
SRCS = ft_isalnum.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_split.c \
	ft_memcpyrev.c \
	ft_strnlen.c \
	ft_strcpy.c \
	ft_strtrim.c \
	ft_isoneof.c \
	ft_strnumocc.c \
	ft_normalize.c \
	ft_strndup.c \
	ft_freeptr.c \
	
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)
	
%.o : %.c
	$(CC) $(CFLAGS) -c  $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf *.a

re: fclean all

.PHONY: re all clean