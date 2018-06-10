/*
** EPITECH PROJECT, 2017
** revstr
** File description:
** revstr
*/

#include "my.h"

char	*my_revstr(char *str)
{
	int     size;
	int     step = 0;
	char    tmp;

	size = my_strlen(str) - 1;
	while (step <= size) {
		tmp = str[step];
		str[step] = str[size];
		str[size] = tmp;
		step++;
		size--;
	}
	return (str);
}
