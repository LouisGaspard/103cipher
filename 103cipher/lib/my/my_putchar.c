/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** my_putchar
*/

#include "my.h"

int	my_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}
