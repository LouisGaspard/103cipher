/*
** EPITECH PROJECT, 2017
** strlowcase
** File description:
** strlowcase
*/

char	*my_strlowcase(char *str)
{
	int	a = 0;

	while (str[a]) {
		if (str[a] >= 65 && str[a] <= 90)
			str[a] = str[a] + 32;
		a++;
	}
	return (str);
}
