# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/26 16:54:24 by nmeintje          #+#    #+#              #
#    Updated: 2025/03/28 16:14:06 by nmeintje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Interface
SOURCES := ./main.cpp \
		   ./AMateria.cpp \
		   ./Character.cpp \
		   ./Cure.cpp \
		   ./Ice.cpp \
		   ./MateriaSource.cpp

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
