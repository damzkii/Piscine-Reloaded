# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahermawa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 11:16:39 by ahermawa          #+#    #+#              #
#    Updated: 2021/11/02 11:16:42 by ahermawa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
PATH_SRC = srcs/
HEADER = includes/
FLAGS = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_strcmp.c $(PATH_SRC)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_swap.o

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)