/*
** EPITECH PROJECT, 2017
** my_sort_int_array
** File description:
** task06
*/

#include "my.h"

int	*check_sort(int *tab, int iter, int c)
{
	if (tab[iter] > tab[c])
		my_swap(&tab[iter], &tab[c]);
	return (tab);
}

void	my_sort_int_array(int *tab, int size)
{
	int	iter = 0;
	int	c = 0;

	while (iter < size) {
		c = iter + 1;
		while (c < size) {
			tab = check_sort(tab, iter, c);
			c++;
		}
		iter++;
	}
}
