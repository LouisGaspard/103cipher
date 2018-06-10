/*
** EPITECH PROJECT, 2017
** put_error
** File description:
** put_error
*/

#include "my.h"

void	my_put_error(char *str)
{
	write(2, str, my_strlen(str));
}
