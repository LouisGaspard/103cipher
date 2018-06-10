/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf
*/

#include "my.h"

void	init_tab_fonct(int (**tab_fonct)())
{
	tab_fonct[0] = my_putstr;
	tab_fonct[1] = my_put_nbr;
	tab_fonct[2] = my_put_nbr;
	tab_fonct[3] = my_put_nbr_octal;
	tab_fonct[4] = my_put_nbr_hexa;
	tab_fonct[5] = my_put_nbr_hexa_cap;
	tab_fonct[6] = my_put_nbr_unsigned;
	tab_fonct[7] = my_printable;
	tab_fonct[8] = my_print_pointer;
	tab_fonct[9] = my_put_nbr_binary;
	tab_fonct[10] = my_putchar;
	tab_fonct[11] = my_put_nbr_long;
}

int	parse_format(t_flags *f)
{
	for (int a = 0; f->format[a] != '\0'; a++) {
		f->nb_space = 0;
		f->nb_format = -1;
		if (f->format[a] == '%' && f->format[a + 1] == '\0')
			return (0);
		if (f->format[a] == '%' && if_flag(f->format[a + 1])) {
			f->nb_format = check_format(f->format[a + 1]);
			a++;
		}
		if (f->nb_format != - 1 && f->nb_format != 12)
			f->nb_letter += (*f->tab_fonct[f->nb_format]) \
				(va_arg(f->arg, void *));
		else
			f->nb_letter += my_putchar(f->format[a]);
	}
	return (f->nb_letter);
}

int	my_printf(const char *format, ...)
{
	t_flags	*f;

	if ((f = malloc(sizeof(*f))) == NULL)
		return (84);
	if ((f->format = malloc(sizeof(char) * my_strlen(format) + 1)) == NULL)
		return (84);
	f->format = format;
	f->nb_space = 0;
	f->s_nb_letter = 0;
	f->nb_format = 0;
	va_start(f->arg, format);
	init_tab_fonct(f->tab_fonct);
	f->nb_letter = parse_format(f);
	va_end(f->arg);
	return (f->nb_letter);
}
