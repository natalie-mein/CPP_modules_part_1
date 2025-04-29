# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 14:46:33 by nmeintje          #+#    #+#              #
#    Updated: 2025/02/24 14:49:32 by nmeintje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := PhoneBook
SOURCES := ./PhoneBook.cpp \
	   ./Contact.cpp \
	   ./main.cpp
	   
HEADERS := ./PhoneBook.hpp \
	   ./Contact.hpp \
      
OBJS := $(SOURCES:.cpp=.o)

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98 -pedantic
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

