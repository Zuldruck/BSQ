/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** displaying characters of a strinf one by one
*/

int my_strlen(const char *);
void write(int, const char *, int);

void my_putstr(char const *str)
{
	write(1, str, my_strlen(str));
}
