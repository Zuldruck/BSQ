##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile that compiles my library into /lib
##

CC	=	gcc

SRC	=	my_compute_power_rec.c	\
		my_compute_square_root.c	\
		my_find_prime_sup.c	\
		my_getnbr.c	\
		my_isneg.c	\
		my_is_prime.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_showmem.c	\
		my_showstr.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c	\
		my_str_isprintable.c	\
		my_str_isupper.c	\
		my_strlen.c	\
		my_strlowcase.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_strstr.c	\
		my_strupcase.c	\
		my_swap.c	\
		my_putnbr_base.c	\
		my_putnbr_base_lowcase.c	\
		my_printf/my_printf.c	\
		my_printf/init.c	\
		my_printf/char.c	\
		my_printf/int.c	\
		my_printf/special_characters.c	\
		my_printf/str.c	\
		my_printf/specifiers.c	\
		my_printf/float.c	\


OBJ	=	$(SRC:.c=.o)


NAME	=	libmy.a


all: 	$(NAME)


$(NAME):	$(OBJ)
	rm -f $(NAME)
	ar rc $(NAME) $(OBJ)


clean:
	rm -f $(OBJ)
