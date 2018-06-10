/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** task03
*/

#include "my.h"

void	len_arg(t_flags *flags, int *a)
{
	if (flags->format[*a] == 's' || flags->format[*a] == 'S')
		flags->nb_space -= my_strlen(va_arg(flags->my_copy, void *));
	else if (flags->format[*a] == 'c')
		flags->nb_space -= 1;
	else
		flags->nb_space -= my_nblen(va_arg(flags->my_copy, int));
}

int	my_strlen(char const *str)
{
	int	size = 0;

	while (str[size])
		size++;
	return (size);
}

int	my_nblen(int nb)
{
	int	len = 0;

	if (nb >= 10) {
		len += my_nblen(nb / 10);
		len += 1;
	}
	else
		len += 1;
	return (len);
}
