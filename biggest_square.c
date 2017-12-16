/*
** EPITECH PROJECT, 2017
** CPE_BSQ_2017
** File description:
** CPE_BSQ_2017 made by Sanchez Lucas
*/

#include "my.h"

void check_number_greater(char c, coord_square_t *square, int i, int j)
{
	if (c - 48 > square->size) {
		square->size = c - 48;
		square->x = j;
		square->y = i;
	}
}

coord_square_t find_biggest_number(char **str, coord_t size)
{
	coord_square_t square = {0};

	for (int i = 0; i < size.lines; i++) {
		for (int j = 0; j < size.cols - square.size + 1; j++) {
			check_number_greater(str[i][j], &square, i, j);
		}
	}
	return (square);
}

void fill_array_of_x(char **str, coord_square_t square)
{
	int size = square.size;
	int x = square.y - size + 1;
	int y = square.x - size + 1;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			str[x + i][y + j] = 'x';
		}
	}
}
