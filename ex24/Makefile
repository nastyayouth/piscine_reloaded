# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eestell <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 21:30:05 by eestell           #+#    #+#              #
#    Updated: 2019/09/13 18:30:36 by eestell          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = includes/
NAME = libft.a
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
CFILE = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(CFILE) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
