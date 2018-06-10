/*
** EPITECH PROJECT, 2017
** is_upper
** File description:
** is_upper
*/

int	my_str_isupper(char const *str)
{
	int	a = 0;

	if (str[a] == '\0')
		return (1);
	while (str[a]) {
		if (!(str[a] >= 'A' && str[a] <= 'Z'))
			return (0);
		a++;
	}
	return (1);
}
