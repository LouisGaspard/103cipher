/*
** EPITECH PROJECT, 2017
** my_power_rec
** File description:
** task04
*/

int	my_compute_power_rec(int nb, int p)
{
	if (p == 0)
		return (1);
	if (p < 0)
		return (0);
	if (((my_compute_power_rec(nb, p - 1) * nb)) > 2147483647 / nb)
		return (0);
	if (((my_compute_power_rec(nb, p - 1) * nb)) > -2147483648 / nb)
		return (0);
	return (my_compute_power_rec(nb, p - 1) * nb);
}
