# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yderridj <yderridj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/24 10:21:48 by yderridj          #+#    #+#              #
#    Updated: 2025/10/28 09:14:47 by yderridj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
RM = rm -f

SOURCES =   ft_printf.c \
utils.c\
utils2.c
OBJETS = $(SOURCES:%.c=%.o)


all : $(NAME)

$(NAME):  $(OBJETS)
	ar rc $@ $^

%.o: %.c 
	$(CC) -Wall -Wextra -Werror -o $@ -c $<

clean :
	rm -f $(OBJETS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re