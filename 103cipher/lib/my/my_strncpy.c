/*
** EPITECH PROJECT, 2017
** strncpy
** File description:
** strncpy
*/

#include "my.h"

char	*my_strncpy(char *dest, char const *src, int n)
{
	int	a = 0;
	int	nb = n;

	while (src[a] && n > 0) {
		dest[a] = src[a];
		a++;
		n--;
	}
	if (nb > my_strlen(src))
		dest[a] = '\0';
	return (dest);
}
