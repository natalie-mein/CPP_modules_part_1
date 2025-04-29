# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/26 16:54:24 by nmeintje          #+#    #+#              #
#    Updated: 2025/03/28 14:47:00 by nmeintje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Polymorphism
SOURCES := ./main.cpp \
	   ./Animal.cpp \
	   ./Cat.cpp \
	   ./Dog.cpp \
	   ./WrongAnimal.cpp \
	   ./WrongCat.cpp

OBJS := $(SOURCES:.cpp=.o)

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++11
RM := rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
