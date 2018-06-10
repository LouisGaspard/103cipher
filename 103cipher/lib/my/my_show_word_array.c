/*
** EPITECH PROJECT, 2017
** aff_tab
** File description:
** aff_tab
*/

#include "my.h"

int	my_show_word_array(char * const *tab)
{
	int	a = 0;

	while (tab[a]) {
		my_putstr(tab[a]);
		my_putchar('\n');
		a++;
	}
	return (0);
}
