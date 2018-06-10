/*
** EPITECH PROJECT, 2017
** my_print_pointer
** File description:
** my_print_pointer
*/

#include "my.h"

int	my_print_pointer(long nb, int nb_letter)
{
	nb_letter += my_putstr("0x");
	nb_letter += my_pointer(nb);
	return (nb_letter);
}

int	my_pointer(long nb)
{
	char	*base = "0123456789abcdef";
	int	len = my_strlen(base);
	int	nb_letter = 0;

	if (nb < 0) {
		nb = -nb;
		nb_letter += my_putchar('-');
	}
	if (nb == 0)
		return (nb_letter);
	else
		nb_letter += my_pointer(nb / len);
	nb_letter += my_putchar(base[nb % len]);
	return (nb_letter);
}
