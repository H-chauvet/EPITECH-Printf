##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC		=		tools/my_puts.c \
				tools/my_puts2.c \
				tools/my_puts3.c \
				src/my_printf.c \
				src/params_list.c \
				src/params_list2.c \
				src/params_list3.c \
				src/main.c

MAKE 	=	 	make

RM 		= 		rm

OBJ		=		$(SRC:.c=.o)

NAME	=		libmy.a

CFLAGS	=		-Wall -Werror -Wshadow -Wextra -I include/

all:			$(NAME)

$(NAME):		$(OBJ)
				ar rc $(NAME) $(OBJ)

clean:
				$(RM) -f $(OBJ)

fclean:			clean
				$(RM) -f $(NAME)
				$(RM) -f src/*.gcda
				$(RM) -f src/*.gcno
				$(RM) -f tools/*.gcda
				$(RM) -f tools/*.gcno
				$(MAKE) fclean -C tests/

re:				fclean all

tests_run:
				$(MAKE) -C tests/
				./tests/unit_tests
