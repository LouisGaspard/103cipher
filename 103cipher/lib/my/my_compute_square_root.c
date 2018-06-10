/*
** EPITECH PROJECT, 2017
** square_root
** File description:
** task05
*/

int     my_compute_power_it(int nb, int p)
{
	int     res = nb;

	if (p == 0)
		return (1);
	if (p < 0)
		return (0);
	while (p > 1) {
		res = res * nb;
		if (res > 2147483647 / nb || res < -2147483648 / nb)
			return (0);
		p--;
	}
	return (res);
}

int	my_compute_square_root(int nb)
{
	int	iter = 0;

	while (iter < nb) {
		if (my_compute_power_it(iter, 2) == nb)
			return (iter);
		iter++;
	}
	return (0);
}
