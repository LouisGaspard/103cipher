/*
** EPITECH PROJECT, 2017
** printable
** File description:
** printable
*/

#include "my.h"

int    my_octal(unsigned int nb)
{
	char  *str = malloc(sizeof(char) * 3 + 1);;
	int   a = 0;

	while (nb > 0) {
		str[a] = '0' + nb % 8;
		nb = nb / 8;
		a++;
	}
	while (a < 3) {
		str[a] = '0';
		a++;
	}
	str[a] = '\0';
	my_revstr(str);
	my_putstr(str);
	a = my_strlen(str);
	free(str);
	return (a);
}

int	my_printable(char *str, int nb_letter)
{
	int	a = 0;

	while (str[a]) {
		if (str[a] < 32 || str[a] >= 127) {
			nb_letter += my_putchar('\\');
			nb_letter += my_octal(str[a]);
		}
		else
			nb_letter += my_putchar(str[a]);
		a++;
	}
	return (nb_letter);
}
