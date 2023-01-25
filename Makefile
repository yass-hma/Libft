# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhmada <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 19:26:14 by yhmada            #+#    #+#              #
#    Updated: 2021/12/04 19:26:16 by yhmada           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc 
CFLAGS = -Wall -Wextra -Werror 
NAME = libft.a

SRC = ft_atoi.c	ft_memset.c	ft_strmapi.c ft_bzero.c	ft_putchar_fd.c	ft_strncmp.c ft_calloc.c \
ft_putnbr_fd.c ft_strnstr.c ft_isalnum.c ft_putstr_fd.c ft_strrchr.c ft_isalpha.c ft_putendl_fd.c \
ft_strtrim.c ft_isascii.c ft_split.c ft_substr.c ft_isdigit.c ft_strchr.c ft_tolower.c ft_isprint.c	ft_strdup.c	\
ft_toupper.c ft_itoa.c ft_striteri.c ft_memchr.c ft_strjoin.c ft_memcmp.c ft_strlcat.c \
ft_memcpy.c ft_strlcpy.c ft_memmove.c ft_strlen.c

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c ft_lstlast.c \
ft_lstiter.c ft_lstdelone.c ft_lstclear.c ft_lstmap.c
OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -r $(NAME) $(OBJ)
%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $< 

bonus : all $(OBJ_BONUS)
	ar -r $(NAME) $(OBJ_BONUS)
clean : 
	rm -rf *.o

fclean : clean 
	rm -rf $(NAME)

re : fclean all
