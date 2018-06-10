/*
** EPITECH PROJECT, 2017
** capitalize
** File description:
** capitalize
*/

char	*my_strcapitalize(char *str)
{
	int	a = 1;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[a]) {
		if (str[a] >= 65 && str[a] <= 90 && str[a - 1] != ' ')
			str[a] = str[a] + 32;
		if (str[a] >= 97 && str[a] <= 122 && \
		    (str[a - 1] == ' ' || \
		     str[a - 1] == '-' || str[a - 1] == '+'))
			str[a] = str[a] - 32;
		a++;
	}
	return (str);
}
