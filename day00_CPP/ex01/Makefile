# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/18 10:11:30 by kmykhail          #+#    #+#              #
#    Updated: 2018/06/18 10:11:32 by kmykhail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = Contacts.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean:clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean all