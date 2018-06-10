/*
** EPITECH PROJECT, 2017
** my_put_nbr_plus
** File description:
** my_put_nbr_plus
*/

#include "my.h"

int	my_put_nbr_plus(int nb)
{
	int	nb_letter = 0;

	if (nb >= 0)
		nb_letter += my_putchar('+');
	nb_letter += my_put_nbr(nb);
	return (nb_letter);
}
