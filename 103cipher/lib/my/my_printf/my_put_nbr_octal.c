/*
** EPITECH PROJECT, 2017
** my_put_octal
** File description:
** my_put_octal
*/

#include "my.h"

int	my_put_nbr_octal(int nb)
{
	char	*base = "01234567";
	int	len = my_strlen(base);
	int	nb_letter = 0;

	if (nb < 0) {
		nb = -nb;
		nb_letter += my_putchar('-');
	}
	if (nb == 0)
		return (nb_letter);
	else
		nb_letter += my_put_nbr_octal(nb / len);
	nb_letter += my_putchar(base[nb % len]);
	return (nb_letter);
}
