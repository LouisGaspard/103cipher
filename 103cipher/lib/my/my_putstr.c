/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** task02
*/

#include "my.h"

int	my_putstr(char *str)
{
	int	size = 0;

	while (str[size]) {
		my_putchar(str[size]);
		size++;
	}
	return (size);
}
