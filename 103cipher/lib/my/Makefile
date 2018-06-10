##
## EPITECH PROJECT, 2017
## lib
## File description:
## lib
##

NAME	=	libmy.a

CC	=	gcc -c

RM	=	rm -f

SRCS    = ./concat_params.c 			\
          ./my_compute_power_rec.c 		\
          ./my_compute_square_root.c 		\
          ./my_find_prime_sup.c 		\
          ./my_getnbr.c 			\
          ./my_is_alphanum.c 			\
          ./my_is_prime.c 			\
          ./my_isneg.c 				\
          ./my_printf/my_flag.c 		\
          ./my_printf/my_print_pointer.c 	\
          ./my_printf/my_put_nbr_unsigned.c 	\
          ./my_printf/my_printable.c 		\
          ./my_printf/my_printf.c 		\
          ./my_printf/my_put_nbr_binary.c 	\
          ./my_printf/my_put_nbr_hexa.c 	\
          ./my_printf/my_put_nbr_hexa_cap.c 	\
          ./my_printf/my_put_nbr_octal.c 	\
          ./my_printf/my_put_nbr_plus.c 	\
          ./my_put_error.c 			\
          ./my_put_nbr.c 			\
          ./my_putchar.c 			\
          ./my_putstr.c 			\
          ./my_revstr.c 			\
          ./my_show_word_array.c 		\
          ./my_showmem.c 			\
          ./my_showstr.c 			\
          ./my_sort_int_array.c 		\
          ./my_str_isalpha.c 			\
          ./my_str_islower.c 			\
          ./my_str_isnum.c 			\
          ./my_str_isprintable.c 		\
          ./my_str_isupper.c 			\
          ./my_str_to_word_array.c 		\
          ./my_strcapitalize.c 			\
          ./my_strcat.c 			\
          ./my_strcmp.c 			\
          ./my_strcpy.c 			\
          ./my_strdup.c 			\
          ./my_strlen.c 			\
          ./my_strlowcase.c 			\
          ./my_strncat.c 			\
          ./my_strncmp.c 			\
          ./my_strncpy.c 			\
          ./my_strstr.c 			\
          ./my_strupcase.c 			\
          ./my_swap.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-I ./

CFLAGS	+=	-W -Wall -Wextra

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		cp my.h ../../include/
		$(CC) $(SRCS) $(LDFLAGS)
		ar rc $(NAME) $(OBJS)
		mv $(NAME) ../
		rm *.o

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) ../$(NAME)

re	:	fclean all

.PHONY	: 	all clean fclean re
