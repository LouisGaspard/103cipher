/*
** EPITECH PROJECT, 2017
** is_num
** File description:
** is_num
*/

int	my_str_isnum(char const *str)
{
	int	a = 0;

	if (str[a] == '\0')
		return (1);
	while (str[a]) {
		if (!(str[a] >= '0' && str[a] <= '9'))
			return (0);
		a++;
	}
	return (1);
}
