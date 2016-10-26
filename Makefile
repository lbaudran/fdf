# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aderragu <aderragu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/21 17:34:59 by aderragu          #+#    #+#              #
#    Updated: 2016/07/23 18:56:37 by lbaudran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

SRC_PATH = ./src/
SRC_NAME = 	main.c\
			modif_list.c\
			recup_map.c\

OBJ = $(SRC_NAME:.c=.o)

LIB_PATH = ./lib/
LIB_NAME = 


INC_PATH_L = $(LIB_PATH)libft/includes
INC_PATH = ./inc/

NAME = fdf

CC = gcc
FLAGS =
MLX = -lmlx -framework OpenGl -framework Appkit

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
LIB = $(addprefix $(LIB_PATH),$(LIB_NAME))

$(NAME): $(SRC)
	@make -C $(LIB_PATH)libft
	@$(CC) -g $(SRC) -o $(NAME) -I $(INC_PATH) -I $(INC_PATH_L) $(LIB_PATH)libft/libft.a $(MLX)
	@echo "Compilation success"

all: $(NAME)

clean:
	@make clean -C $(LIB_PATH)libft/
	@rm -rf $(OBJ)
	@echo "Delete .o"

fclean: clean
	@make fclean -C $(LIB_PATH)libft/
	@rm -rf $(NAME)
	@echo "Delete fdf"

re: fclean all
