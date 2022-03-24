# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 21:39:05 by pedmurie@st       #+#    #+#              #
#    Updated: 2022/03/24 21:41:54 by pedmurie@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMPILER = gcc
FLAGS = -Wall -Wextra -Werror
LIB = libft/libft.a
OBJECTS = $(SOURCES:.c=.o)

clean:
	/bin/rm -rf
fclean: clean
	/bin/rm -rf
