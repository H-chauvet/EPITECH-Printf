##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile for unit_test
##

SRC	=		test_my_printf.c \
			test_my_printf2.c \
			test_my_printf3.c \
			test_my_printf4.c \
			test_my_printf5.c \
			../src/my_printf.c \
			../src/params_list.c \
			../src/params_list2.c \
			../src/params_list3.c \
			../tools/my_puts.c \
			../tools/my_puts2.c \
			../tools/my_puts3.c \

MAKE	=	make

RM		= 	rm

CC		= 	gcc

OBJ     =   $(SRC:.c=.o)

NAME	=	unit_tests

CFLAGS  =   -Wall -Werror -Wshadow -Wextra -I ../include/ --coverage -lcriterion

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

clean:
			$(RM) -f $(OBJ)

fclean:		clean
			$(RM) -f $(NAME)
			$(RM) -f *.gcda
			$(RM) -f *.gcno

re:			fclean all
