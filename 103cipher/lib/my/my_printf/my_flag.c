/*
** EPITECH PROJECT, 2017
** flag
** File description:
** flag
*/

#include "my.h"

int	is_digit(char format)
{
	if (format >= '0' && format <= '9')
		return (1);
	return (0);
}

int	is_int(char format)
{
	if (format == 'd')
		return (1);
	else if (format == 'i')
		return (1);
	return (0);
}

int     check_format(char format)
{
	char    *flags = "sdioxXuSpbcl";
	int     a = 0;

	while (flags[a]) {
		if (format == flags[a])
			return (a);
		a++;
	}
	return (-1);
}

int     if_flag(char c)
{
	char    *str = "csdioxXuSpb%l";
	int     a = 0;

	while (str[a]) {
		if (str[a] == c)
			return (1);
		a++;
	}
	return (0);
}
