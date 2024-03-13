# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yachen <yachen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 14:21:49 by yachen            #+#    #+#              #
#    Updated: 2024/03/13 11:55:35 by yachen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MakeSound

CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@echo "\e[32m\n==================================="
		@echo "\e[32mCompiling MakeSound----------------"
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "\e[32m---created with success : MakeSound"
		@echo "\e[32m===================================\n\e[0m"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "\e[32m\n====================="
	@echo "\e[32mCleaning MakeSound----"
	@rm -rf $(OBJ)
	@echo "\e[32m-----MakeSound Cleaned"
	@echo "\e[32m=====================\n\e[0m"

fclean:
	@echo "\e[32m\n====================="
	@echo "\e[32mCleaning MakeSound----"
	@rm -rf $(OBJ)
	@echo "\e[32m-----MakeSound Cleaned"
	@rm -rf $(NAME)
	@echo "\e[32m=====================\n\e[0m"

re: fclean all

.PHONY: clean fclean all re bonus
