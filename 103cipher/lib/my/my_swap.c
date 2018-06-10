/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** task01
*/

void	my_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
