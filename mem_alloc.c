/*
** EPITECH PROJECT, 2017
** CPE_BSQ_bootstrap_2017
** File description:
** CPE_BSQ_bootstrap_2017 made by Sanchez Lucas
*/

#include "my.h"

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
	char **array = malloc(sizeof(char *) * nb_rows);

	for (int i = 0; i < nb_rows; i++)
		array[i] = malloc(sizeof(char) * nb_cols);
	return (array);
}

char **mem_dup_2d_array(char **arr, int nb_rows, int nb_cols)
{
	char **new_arr = malloc(sizeof(char *) * nb_rows);
	int i = 0;
	int j = 0;

	for (int i = 0; i < nb_rows; i++)
		new_arr[i] = malloc(sizeof(char) * (nb_cols + 1));
	while (i < nb_rows) {
		while (j < nb_cols) {
			new_arr[i][j] = arr[i][j];
			j += 1;
		}
		j = 0;
		i += 1;
	}
	return (new_arr);
}
