# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 15:35:22 by rjesus-d          #+#    #+#              #
#    Updated: 2025/07/04 19:04:20 by rjesus-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
# CONFIG                                                                       #
#==============================================================================#

NAME = phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

#==============================================================================#
# SOURCE FILES                                                                 #
#==============================================================================#

SRC =	main.cpp PhoneBook.cpp Contact.cpp

OBJ = $(SRC:.cpp=.o)

#==============================================================================#
# COLORS                                                                       #
#==============================================================================#

RED = \033[1;31m

GREEN = \033[1;32m

RESET = \033[0m

#==============================================================================#
# RULES                                                                        #
#==============================================================================#

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) $(OBJ) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Compilation Successful: megaphone created$(RESET)"

clean:
	@if ls $(OBJ) 1> /dev/null 2>&1; then \
		$(RM) $(OBJ); \
		echo "$(GREEN)Intermediate object files removed:$(RESET)\n$(OBJ)"; \
	else \
		echo "$(RED)No object files to remove.$(RESET)"; \
	fi

fclean: clean
	@if [ -f $(NAME) ]; then \
		$(RM) $(NAME); \
		echo "$(GREEN)Compiled executable removed:$(RESET)\n$(NAME)"; \
	else \
		echo "$(RED)No executable to remove.$(RESET)"; \
	fi

re: fclean all

.PHONY: all clean fclean re

################################################################################
