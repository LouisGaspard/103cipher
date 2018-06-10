/*
** EPITECH PROJECT, 2017
** strupcase
** File description:
** strupcase
*/

char	*my_strupcase(char *str)
{
	int	a = 0;

	while (str[a]) {
		if (str[a] >= 97 && str[a] <= 122)
			str[a] = str[a] - 32;
		a++;
	}
	return (str);
}
