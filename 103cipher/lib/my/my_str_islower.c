/*
** EPITECH PROJECT, 2017
** is_lower
** File description:
** is_lower
*/

int	my_str_islower(char const *str)
{
	int	a = 0;

	if (str[a] == '\0')
		return (1);
	while (str[a]) {
		if (!(str[a] >= 'a' && str[a] <= 'z'))
			return (0);
		a++;
	}
	return (1);
}
