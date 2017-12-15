##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## all clean fclean re
##

SRC	=	main.c	\
		mem_alloc.c	\
		load_file.c	\
		get_params_tab.c	\
		display_array.c	\
		algorithm.c	\
		biggest_square.c	\

CC	= 	gcc

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

CFLAGS	=	-I./include -Wextra -Wall -Werror

FLAGS	=	-L./lib/my -lmy

all:	prepare_lib $(NAME)

prepare_lib:
	make -C lib/my

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(FLAGS) $(CFLAGS)

clean:
	make clean -C lib/my
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
