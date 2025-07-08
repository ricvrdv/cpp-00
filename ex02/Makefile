# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: applecore <applecore@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 15:22:47 by rjesus-d          #+#    #+#              #
#    Updated: 2025/07/08 23:52:27 by applecore        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g

RM = rm -rf

SRCS = Account.cpp tests.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
