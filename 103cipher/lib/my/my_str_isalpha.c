/*
** EPITECH PROJECT, 2017
** is_alpha
** File description:
** is_alpha
*/

int	my_str_isalpha(char const *str)
{
	int	a = 0;

	if (str[a] == '\0')
		return (1);
	while (str[a]) {
		if (!((str[a] >= 'a' && str[a] <= 'z') ||
		      (str[a] >= 'A' && str[a] <= 'Z')))
			return (0);
		a++;
	}
	return (1);
}
