##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## all clean fclean re
##

SRC	=	src/main.c	\
		src/mem_alloc.c	\
		src/load_file.c	\
		src/get_params_tab.c	\
		src/display_array.c	\
		src/algorithm.c	\
		src/biggest_square.c	\

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
