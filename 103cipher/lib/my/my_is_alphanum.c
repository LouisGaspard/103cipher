/*
** EPITECH PROJECT, 2017
** alphanum
** File description:
** alphanum
*/

int	my_is_alphanum(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
	    || (c >= '0' && c <= '9') || c == '#' || c == ' ')
		return (0);
	else
		return (1);
	return (0);
}
