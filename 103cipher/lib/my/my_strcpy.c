/*
** EPITECH PROJECT, 2017
** strcpy
** File description:
** strcpy
*/

char	*my_strcpy(char *dest, char const *src)
{
	int	a = 0;

	while (src[a]) {
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
