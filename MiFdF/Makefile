# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/17 12:57:33 by pedmurie@st       #+#    #+#              #
#    Updated: 2022/06/17 14:28:57 by pedmurie@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	FdF

SRC		=	

OBJ		=	$(addprefix $(OBJDIR),$(SRC:.c=.o))

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

MLX		=	./miniLibX/
MLX_LIB	= 	$(addprefix $(MLX),mlx.a)
MLX_INC	= 	-I ./miniLibX
MLX_LNK	= 	-L ./miniLibX -l mlx -framework OpenGL -framework AppKit

FT		= 	./libft/
FT_LIB	= 	$(addprefix $(FT),libft.a)
FT_INC	= 	-I ./libft
FT_LNK	= 	-L ./libft -l ft

SRCDIR	= 	./src/
INCDIR	= 	./includes/
OBJDIR	= 	./obj/

all: obj $(FT_LIB) $(MLX_LIB) $(NAME)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) $(MLX_INC) $(FT_INC) -I $(INCDIR) -o $@ -c $<

$(FT_LIB):
	make -C $(FT)

$(MLX_LIB):
	make -C $(MLX)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(MLX_LNK) $(FT_LNK) -lm -o $(NAME)

clean:
	rm -rf $(OBJDIR)
	make -C $(FT) clean
	make -C $(MLX) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(FT) fclean

re: fclean all
