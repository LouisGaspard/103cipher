/*
** EPITECH PROJECT, 2017
** strcmp
** File description:
** strcmp
*/

int	my_strcmp(char const *s1, char const *s2)
{
	int	a = 0;

	while (s1[a] == s2[a] && s1[a] && s2[a])
		a++;
	return (s1[a] - s2[a]);
}
