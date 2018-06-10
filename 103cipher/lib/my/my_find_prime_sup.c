/*
** EPITECH PROJECT, 2017
** find_prime_supp
** File description:
** task07
*/

#include "my.h"

int	my_find_prime_sup(int nb)
{
	if ((nb > 2) && (nb % 2 == 0))
		nb++;
	while (my_is_prime(nb) == 0)
		nb += 2;
	return (nb);
}
