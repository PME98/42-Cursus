# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 21:39:05 by pedmurie@st       #+#    #+#              #
#    Updated: 2022/03/24 23:41:39 by pedmurie@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = *.c
FLAGS = -Wall -Wextra -Werror
OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	gcc -c $(FLAGS) $(SOURCES)
	ar rcs $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	/bin/rm -rf
fclean: clean
	/bin/rm -rf
re: fclean all