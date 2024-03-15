# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yachen <yachen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 14:21:49 by yachen            #+#    #+#              #
#    Updated: 2024/03/15 11:56:11 by yachen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror -g

SRC_FILE = main AMateria Character Cure Ice MateriaSource IMateriaSource ICharacter

SRC = $(addsuffix .cpp, $(addprefix srcs/, $(SRC_FILE)))

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@echo "\e[32m\n==================================="
		@echo "\e[32mCompiling a.out----------------"
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "\e[32m---created with success : a.out"
		@echo "\e[32m===================================\n\e[0m"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "\e[32m\n====================="
	@echo "\e[32mCleaning a.out----"
	@rm -rf $(OBJ)
	@echo "\e[32m-----a.out Cleaned"
	@echo "\e[32m=====================\n\e[0m"

fclean:
	@echo "\e[32m\n====================="
	@echo "\e[32mCleaning a.out----"
	@rm -rf $(OBJ)
	@echo "\e[32m-----a.out Cleaned"
	@rm -rf $(NAME)
	@echo "\e[32m=====================\n\e[0m"

re: fclean all

.PHONY: clean fclean all re bonus
