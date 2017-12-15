/*
** EPITECH PROJECT, 2017
** CPE_BSQ_2017
** File description:
** CPE_BSQ_2017 made by Sanchez Lucas
*/

#include "my.h"

int fs_get_number_from_first_line(char *buf)
{
	int nb = 0;

	nb = my_getnbr(buf);
	if (nb <= 0)
		exit (84);
	return (nb);
}

int get_nbr_cols(int len, char *str)
{
	int i = len;
	int j = 0;

	while (str[i] != '\n') {
		j++;
		i++;
	}
	return (j);
}
