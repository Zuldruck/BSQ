##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## my_ls_bootstrap - Makefile
##

SRC		= 	main_bsq.c

OBJ		=	$(SRC:.c=.o)

CFLAGS		=	-W -Wall -Wextra

NAME		=	bsq

all:		$(NAME)


$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) -I./include

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re: 		fclean all
