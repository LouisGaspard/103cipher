/*
** EPITECH PROJECT, 2017
** is_prime
** File description:
** task06
*/

int	my_is_prime(int nb)
{
	int	div;

	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb < 2)
		return (0);
	for (div = 3; div * div < nb + 1; div += 2) {
		if (nb % div == 0)
			return (0);
	}
	return (1);
}
