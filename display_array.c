/*
** EPITECH PROJECT, 2017
** CPE_BSQ_2017
** File description:
** CPE_BSQ_2017 made by Sanchez Lucas
*/

#include "my.h"

void display(char **str, coord_t size)
{
	for (int i = 0; i < size.lines; i++)
		my_putstr(str[i]);
}
