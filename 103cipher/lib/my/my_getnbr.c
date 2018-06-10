/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** task05
*/

int	my_getnbr(char const *str)
{
	int	a = 0;
	int	minus = 0;
	int	neg = 1;
	int	result = 0;

	while (str[a] == '-' || str[a] == '+') {
		if (str[a] == '-')
			minus++;
		a++;
	}
	if (str[a - 1] == '-' && minus % 2 == 1)
		neg = -1;
	while (str[a] && str[a] >= '0' && str[a] <= '9') {
		if (result == 214748364 && str[a] > '7' && neg == 1)
		        return (0);
		if (result == 214748364 && str[a] > '8' && neg == -1)
		        return (0);
		if (result > 214748364)
		        return (0);
		result = result * 10 + str[a] - 48;
		a++;
	}
	return (result * neg);
}
