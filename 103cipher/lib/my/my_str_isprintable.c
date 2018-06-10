/*
** EPITECH PROJECT, 2017
** is_printable
** File description:
** is_printable
*/

int	my_str_isprintable(char const *str)
{
	int	a = 0;

	if (str[a] == '\0')
		return (1);
	while (str[a]) {
		if (!(str[a] < 32 && str[a] == 127))
			return (0);
		a++;
	}
	return (1);
}
