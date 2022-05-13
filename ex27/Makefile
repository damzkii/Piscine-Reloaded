# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahermawa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 14:37:16 by ahermawa          #+#    #+#              #
#    Updated: 2021/11/02 14:37:20 by ahermawa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file 
CC = gcc
SRCS = ./
FLAGS = -Wall -Werror -Wextra
OPTIONS = -o$(NAME)
SRC = $(SRCS)main.c
OBJ = main.o

.PHONY: all clean fclean

all: $(NAME)

$(NAME):
		$(CC) $(FLAGS) $(OPTIONS) $(SRC)
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)
