/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** task07
*/

#include "my.h"

int	my_put_nbr(int	nb)
{
	int	neg = 0;
	int	nb_letter = 0;

	if (nb < 0) {
		nb_letter += my_putchar('-');
		if (nb == -2147483648) {
			neg = 1;
			nb++;
		}
		nb = - nb;
	}
	if (nb >= 10)
		nb_letter += my_put_nbr(nb / 10);
	if (neg == 1)
		nb_letter += my_putchar((nb % 10) + 49);
	else
		nb_letter += my_putchar((nb % 10) + 48);
	return (nb_letter);
}
