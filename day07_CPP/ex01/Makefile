# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/28 15:23:30 by kmykhail          #+#    #+#              #
#    Updated: 2018/06/28 15:30:10 by kmykhail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRC = iter.cpp

OBJ = $(SRC:.cpp=.o)

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all 
