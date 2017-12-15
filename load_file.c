/*
** EPITECH PROJECT, 2017
** CPE_BSQ_bootstrap_2017
** File description:
** CPE_BSQ_bootstrap_2017 made by Sanchez Lucas
*/

#include "my.h"

char *load_file_in_mem(char const *filepath)
{
	int fd = open(filepath, O_RDONLY);
	char *buf;
	struct stat buffer;
	int size = 0;

	if (fd == -1)
		exit (84);
	stat(filepath, &buffer);
	size = buffer.st_size;
	buf = malloc(sizeof(char) * size + 1);
	read(fd, buf, size);
	buf[size] = 0;
	close(fd);
	return (buf);
}

int my_int_len(int nb)
{
	int i = 1;

	while (nb > 9) {
		nb /= 10;
		i++;
	}
	return (i);
}

coord_t find_size(char const *filepath)
{
	coord_t size;
	char *buf = load_file_in_mem(filepath);
	int n;

	size.lines = fs_get_number_from_first_line(buf);
	n = my_int_len(size.lines) + 1;
	size.cols = get_nbr_cols(n, buf);
	free(buf);
	return (size);
}

char **load_2d_arr_from_file(char const *filepath, coord_t size)
{
	int i = 0;
	int j = 0;
	char *buf = load_file_in_mem(filepath);
	int n = my_int_len(size.lines) + 1;
	char **str = mem_alloc_2d_array(size.lines, size.cols + 2);

	while (i < size.lines) {
		while (j < size.cols + 1) {
			str[i][j] = buf[n];
			j += 1;
			n += 1;
		}
		str[i][j] = 0;
		j = 0;
		i += 1;
	}
	free (buf);
	return (str);
}
