##
## EPITECH PROJECT, 2017
## 103
## File description:
## 103
##

NAME	= 103cipher

CC	= gcc

RM	= rm -f

SRCS	= ./src/main.c 

OBJS	= $(SRCS:.c=.o)

LIB	= -L ./lib/ -lmy

CFLAGS = -I ./include/

CFLAGS += -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 make -C ./lib/my/
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS) $(LIB)

clean:
	make clean -C ./lib/my/
	$(RM) $(OBJS)

fclean: clean
	$(RM) ./lib/libmy.a
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
