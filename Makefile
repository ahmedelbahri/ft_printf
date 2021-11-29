# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 15:15:15 by ahel-bah          #+#    #+#              #
#    Updated: 2021/11/29 11:05:16 by ahel-bah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

C = gcc

F = -Wall -Wextra -Werror

SRC = ft_printf.c ft_puthexa_lo.c ft_puthexa_up.c ft_strlen.c \
	ft_putnbr.c ft_putchar.c ft_putstr.c ft_putnbr_unsigned.c ft_putptr.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o:%.c
	@$(C) $(F) -c $<

$(NAME): $(OBJ)
	@ar -rc $(NAME) $(OBJ)

clean:
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all