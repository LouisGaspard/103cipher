/*
** EPITECH PROJECT, 2017
** strncat
** File description:
** strncat
*/

#include "my.h"

char	*my_strncat(char *dest, char const *src, int nb)
{
	int	len = my_strlen(dest);
	int	a = 0;

	while (nb > a && src[a]) {
		dest[len + a] = src[a];
		a++;
	}
	dest[len + a] = '\0';
	return (dest);
}
