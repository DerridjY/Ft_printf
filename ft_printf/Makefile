# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yderridj <yderridj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/24 10:21:48 by yderridj          #+#    #+#              #
#    Updated: 2025/10/24 10:32:21 by yderridj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
RM = rm -f

BONUS = 

SOURCES =   
OBJETS = $(SOURCES:%.c=%.o)
BONUS_OBJETS = $(BONUS:.c=.o)

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

bonus : $(OBJETS) $(BONUS_OBJETS)
	ar -rcs $(NAME) $(OBJETS) $(BONUS_OBJETS)

.PHONY: all clean fclean re