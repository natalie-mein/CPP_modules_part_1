# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/12 13:46:31 by nmeintje          #+#    #+#              #
#    Updated: 2025/03/12 13:46:47 by nmeintje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Replicate
SOURCES := ./main.cpp \
	   	   ./Replicate.cpp 

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
