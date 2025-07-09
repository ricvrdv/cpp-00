# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 17:14:32 by rjesus-d          #+#    #+#              #
#    Updated: 2025/07/09 17:14:34 by rjesus-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g

RM = rm -rf

SRCS = Account.cpp tests.cpp

OBJS = $(SRCS:.cpp=.o)

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
