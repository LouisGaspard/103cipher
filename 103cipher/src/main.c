/*
** EPITECH PROJECT, 2017
** 103cipher_2017
** File description
** 103cipher_2017
*/

#include "my.h"

int *my_matrice_4(char *str)
{
	int *matrice = malloc(sizeof(int) * 4);
	int len = my_strlen(str);
	int a = 0;

	while (a < len) {
		matrice[a] = str[a];
		a++;
	}
	while (len < 4) {
		matrice[len] = 0;
		len++;
	}
	return (matrice);
}

void my_crypt_4(char *mess, int *matrice)
{
	int a = 0;
	int b = 1;
	int c = 0;
	int d = 0;
	int len = my_strlen(mess);

	my_printf("Key matrix :\n");
	my_printf("%d\t%d\n", matrice[0], matrice[1]);
	my_printf("%d\t%d\n\n", matrice[2], matrice[3]);
	my_printf("Encrypted message :\n");
	while (b < len) {
		c = mess[a] * matrice[0] + mess[b] * matrice[2];
		d = mess[a] * matrice[1] + mess[b] * matrice[3];
		my_printf("%d %d", c, d);
		a += 2;
		b += 2;
		if (b < len)
			my_printf(" ");
	}
	if (a < len) {
		c = mess[a] * matrice[0];
		d = mess[a] * matrice[1];
		printf(" %d %d", c, d);
	}
	my_printf("\n");
}

int *my_matrice_9(char *str)
{
	int *matrice = malloc(sizeof(int) * 9);
	int len = my_strlen(str);
	int a = 0;

	while (a < len) {
		matrice[a] = str[a];
		a++;
	}
	while (len < 9) {
		matrice[len] = 0;
		len++;
	}
	return (matrice);
}

void my_crypt_9(char **av, int *matrice)
{
	my_printf("Key matrix :\n");
	my_printf("%d\t%d\t%d\n", matrice[0], matrice[1], matrice[2]);
	my_printf("%d\t%d\t%d\n", matrice[3], matrice[4], matrice[5]);
	my_printf("%d\t%d\t%d\n\n", matrice[6], matrice[7], matrice[8]);
	my_printf("Encrypted message :\n");
}

int *my_matrice_16(char *str)
{
	int *matrice = malloc(sizeof(int) * 16);
	int len = my_strlen(str);
	int a = 0;

	while (a < len) {
		matrice[a] = str[a];
		a++;
	}
	while (len < 16) {
		matrice[len] = 0;
		len++;
	}
	return (matrice);
}

void my_crypt_16(char **av, int *matrice)
{
	my_printf("Key matrix :\n");
	my_printf("%d\t%d\t", matrice[0], matrice[1]);
	my_printf("%d\t%d\n", matrice[2], matrice[3]);
	my_printf("%d\t%d\t", matrice[4], matrice[5]);
	my_printf("%d\t%d\n", matrice[6], matrice[7]);
	my_printf("%d\t%d\t", matrice[8], matrice[9]);
	my_printf("%d\t%d\n", matrice[10], matrice[11]);
	my_printf("%d\t%d\t", matrice[12], matrice[13]);
	my_printf("%d\t%d\n\n", matrice[14], matrice[15]);
	my_printf("Encrypted message :\n");
}

void crypt(char **av)
{
	int len = my_strlen(av[2]);
	int *matrice;

	if (len <= 4) {
		matrice = my_matrice_4(av[2]);
		my_crypt_4(av[1], matrice);
	}
	if ((len > 4) && (len <= 9)) {
		matrice = my_matrice_9(av[2]);
		my_crypt_9(av, matrice);
	}
	if ((len > 9) && (len <= 16)) {
		matrice = my_matrice_16(av[2]);
		my_crypt_16(av, matrice);
	}
}

int main(int ac, char **av)
{
	int flag = 0;

	if (ac != 4)
		return (84);
	flag = my_getnbr(av[3]);
	if ((flag != 0) && (flag != 1))
		return (84);
	if (flag == 0)
		crypt(av);
	//else if (flag == 1)
	//decrypt(av);
	else
		return (84);
	return (0);
}