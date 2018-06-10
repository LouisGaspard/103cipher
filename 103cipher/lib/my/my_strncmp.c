/*
** EPITECH PROJECT, 2017
** strncmp
** File description:
** strncmp
*/

int	my_strncmp(char const *s1, char const *s2, int n)
{
	int	a = 0;

	while (s1[a] == s2[a] && n > 0 && s1[a] && s2[a])
		a++;
	return (a < n ? s1[a] - s2[a] : 0);
}
