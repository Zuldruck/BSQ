/*
** EPITECH PROJECT, 2017
** CPE_BSQ_bootstrap_2017
** File description:
** CPE_BSQ_bootstrap_2017 made by Sanchez Lucas
*/

#include "my.h"

void my_free_tab(char **str, coord_t size)
{
	for (int i = 0; i < size.lines; i++)
		free(str[i]);
	free(str);
}

void error_gesture(int size)
{
	if (size != 2)
		exit (84);
}

int main(int ac, char **av)
{
	char *filepath;
	char **str;
	coord_t size;

	error_gesture(ac);
	filepath = av[1];
	size = find_size(filepath);
	str = load_2d_arr_from_file(filepath, size);
	find_biggest_square(str, size);
	display(str, size);
	my_free_tab(str, size);
	return (0);
}
