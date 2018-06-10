/*
** EPITECH PROJECT, 2017
** concat_params
** File description:
** concat_params
*/

#include "my.h"

int	malloc_argv(int ac, char **av)
{
	int	a = 0;
	int	res = 0;

	while (ac > a) {
		res += my_strlen(av[a]);
		a++;
	}
	return (res);
}

char	*concat_params(int argc, char **argv)
{
	int	a = 0;
	char	*dest;

	if (argc > 1)
		dest = malloc(sizeof(char *) + (malloc_argv(argc, argv) + 1));
	else
		return (my_strcat(argv[0], "\n"));
	while (argc > a) {
		dest = my_strcat(dest, argv[a]);
		if (argc - 1 != a)
			dest = my_strcat(dest, " ");
		a++;
	}
	return (dest);
}
