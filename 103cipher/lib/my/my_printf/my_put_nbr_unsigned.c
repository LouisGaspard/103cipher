/*
** EPITECH PROJECT, 2017
** put_nbr_unsigned
** File description:
** put_nbr_unsigned
*/

#include "my.h"

int	my_put_nbr_unsigned(unsigned int nb)
{
	int	nb_letter = 0;

	if (nb >= 10) {
		nb_letter += my_put_nbr(nb / 10);
		nb_letter += my_putchar(nb % 10 + '0');
	}
	if (nb < 10)
		nb_letter += my_putchar(nb % 10 + '0');
	return (nb_letter);
}
