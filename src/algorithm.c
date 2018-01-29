/*
** EPITECH PROJECT, 2017
** CPE_BSQ_2017
** File description:
** CPE_BSQ_2017 made by Sanchez Lucas
*/

#include "my.h"

void fill_first_line_first_column(char **str, coord_t size)
{
	for (int i = 0; i < size.cols; i++) {
		if (str[0][i] == '.')
			str[0][i] = '1';
		else
			str[0][i] = '0';
	}
	for (int i = 1; i < size.lines; i++) {
		if (str[i][0] == '.')
			str[i][0] = '1';
		else
			str[i][0] = '0';
	}
}

char check_sides(char **str, int line, int col)
{
	char left = str[line][col - 1];
	char top = str[line - 1][col];
	char corner = str[line - 1][col - 1];

	if (left <= top && left <= corner)
		return (left + 1);
	else if (top <= left && top <= corner)
		return (top + 1);
	return (corner + 1);
}

void verif_o_or_dot(char **str, int i, int j)
{
	if (str[i][j] == 'o')
		str[i][j] = '0';
	else
		str[i][j] = check_sides(str, i, j);
}

void fill_whole_array(char **str, coord_t size)
{
	if (size.cols == 1 || size.lines == 1)
		return;
	for (int i = 1; i < size.lines; i++) {
		for (int j = 1; j < size.cols; j++)
			verif_o_or_dot(str, i, j);
	}
}

void find_biggest_square(char **str, coord_t size)
{
	coord_square_t square;
	char **str_copy = mem_dup_2d_array(str, size.lines, size.cols + 2);

	fill_first_line_first_column(str_copy, size);
	fill_whole_array(str_copy, size);
	square = find_biggest_number(str_copy, size);
	fill_array_of_x(str, square);
	my_free_tab(str_copy, size);
}
