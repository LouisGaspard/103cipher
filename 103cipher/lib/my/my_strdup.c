/*
** EPITECH PROJECT, 2017
** strdup
** File description:
** strdup
*/

#include "my.h"

char	*my_strdup(char const *str)
{
	char	*dest = malloc(sizeof(*str) * my_strlen(str) + 1);

	dest = my_strcpy(dest, str);
	return (dest);
}
