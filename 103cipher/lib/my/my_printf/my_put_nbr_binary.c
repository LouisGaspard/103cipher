/*
** EPITECH PROJECT, 2017
** my_put_nb_binary
** File description:
** my_put_nb_binary
*/

#include "my.h"

int	my_put_nbr_binary(unsigned int nb)
{
	char	*base = "01";
	int	len = my_strlen(base);
	int	nb_letter = 0;

	if (nb == 0)
		return (nb_letter);
	else
		nb_letter += my_put_nbr_binary(nb / len);
	nb_letter += my_putchar(base[nb % len]);
	return (nb_letter);
}
