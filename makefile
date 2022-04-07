# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 16:03:10 by pedmurie@st       #+#    #+#              #
#    Updated: 2022/04/07 16:58:37 by pedmurie@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libft.a

####LINUX####

SONAME	=	libft.so

####FILES####

SRC		= 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
			ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
			ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ 	= 	$(SRC:%.c=%.o)

####COMPILE####

CFLAGS 	= 	-Wall -Wextra -Werror

CC		=	gcc

RM 		= 	rm -f

#####COMPILE TARGET####

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -c $(CFLAGS) $(SRC)
	ar rcs $(NAME) $(OBJ)

####TARGETS####

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(SONAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o $(SONAME) $(OBJ)

.PHONY: fclean all clean re