/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** all prototypes
*/

#ifndef _MY_H_
#define _MY_H_

#include <stdarg.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

typedef struct tab_s {
	char c;
	void (*fptr)(va_list);
} tab_t;
typedef struct spec_s {
	char c;
	int (*fptr)(va_list, int);
} spec_t;

typedef struct coord_s {
	int cols;
	int lines;
} coord_t;

typedef struct coord_square_s {
	int x;
	int y;
	int size;
} coord_square_t;

void my_putchar(char);
int my_isneg(int);
int my_put_nbr(int);
int my_swap(int *, int *);
void my_putstr(char const *);
int my_strlen(char const *);
int my_getnbr(char const *);
void my_sort_int_array(int *, int);
int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_is_prime(int);
int my_find_prime_sup(int);
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
char *my_strstr(char const *, char const *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
char *my_strcapitalize(char *);
int my_str_isalpha(char const *);
int my_str_isnum(char const *);
int my_str_islower(char const *);
int my_str_isupper(char const *);
int my_str_isprintable(char const *);
int my_showstr(char const *);
int my_showmem(char const *, int);
char *my_strcat(char *, char const *);
char *my_strncat(char *, char const *, int);
void func_init(tab_t *print, spec_t *spec);
void my_put_char(va_list);
void my_put_int(va_list);
void my_put_unsigned_int(va_list);
void my_put_str(va_list);
void my_put_ampersand(va_list);
void my_putnbr_hexa(va_list);
void my_putnbr_hexa_lowcase(va_list);
void my_putnbr_octal(va_list);
void my_putnbr_binary(va_list);
void my_putnbr_base(int, char *);
void my_putnbr_base_lowcase(long long, int);
void my_put_str_non_printable(va_list list);
int my_printf(char *str, ...);
void my_put_pointer_adress(va_list list);
int spec_zero(va_list, int nbr_zero);
int spec_dot(va_list, int nbr_zero);
int spec_space(va_list, int nbr_zero);
void my_put_float(va_list list);
int spec_plus(va_list, int);
int spec_minus(va_list, int);
int spec_hashtag(va_list, int);
char *mem_alloc(char const*, char const*);
char **mem_dup_2d_array(char **arr, int nb_rows, int nb_cols);
char **mem_alloc_2d_array(int, int);
char *load_file_in_mem(char const *);
char **load_2d_arr_from_file(char const *, coord_t);
int is_square_of_size(char **, int, int, int);
int fs_get_number_from_first_line(char *);
int get_nbr_cols(int, char *str);
void display(char **, coord_t);
coord_t find_size(const char *filepath);
int my_int_len(int nb);
void my_free_tab(char **str, coord_t size);
void find_biggest_square(char **str, coord_t);
coord_square_t find_biggest_number(char **str_copy, coord_t size);
void fill_array_of_x(char **str, coord_square_t square);

#endif
