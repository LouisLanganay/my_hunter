##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

include Makefile_colors.mk

SRC	=	my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_contain_alpha.c		\
		my_find_prime_sup.c		\
		my_getnbr.c			\
		my_isneg.c			\
		my_is_prime.c			\
		my_putchar.c			\
		my_putchar_error.c		\
		my_put_nbr.c			\
		my_put_nbr_float.c		\
		my_strcontain.c		\
		my_putstr.c			\
		my_putstr_error.c		\
		my_revstr.c			\
		my_showmem.c			\
		my_showstr.c			\
		my_sort_int_array.c		\
		my_strcapitalize.c		\
		my_strcat.c			\
		my_strcmp.c			\
		my_strcpy.c			\
		my_str_isalpha.c		\
		my_str_islower.c		\
		my_str_isnum.c			\
		my_str_isprintable.c		\
		my_str_isupper.c		\
		my_strlen.c			\
		my_strlowcase.c			\
		my_strncat.c			\
		my_strncmp.c			\
		my_strncpy.c			\
		my_strstr.c			\
		my_str_to_word_array.c		\
		my_strupcase.c			\
		my_swap.c			\
		sum_numbers.c			\
		sum_strings_length.c		\
		disp_stdarg.c			\
		my_nbrlen.c			\
		my_put_unsignednbr.c		\
		my_unsignednbrlen.c		\
		my_putnbr_base.c		\
		my_printf.c			\
		my_put_address.c		\
		my_putnbr_base_long.c		\
		my_put_nbr_scientific.c		\
		my_int_to_str.c			\
		my_e_or_f_flag.c		\
		my_put_nbr_long.c		\
		printf/c.c			\
		printf/di.c			\
		printf/f.c			\
		printf/modulo.c			\
		printf/s.c			\
		printf/u.c			\
		printf/x.c			\
		printf/o.c			\
		printf/p.c			\
		printf/n.c			\
		printf/e.c			\
		printf/b.c			\
		printf/g.c

CFLAGS 			+= -g

OBJ				=	$(SRC:.c=.o)

NAME			=	libmy.a

FILES			=	$(shell find . \( -name '*~' 	\
					-o -name '*.gcda' -o -name '*.gcno'		\
					-o -name 'unit_tests' -o -name 'exe' \) )

PATH_INCLUDE	=	../../includes

PATH_LIB		=	.

PATH_MAIN		=	../../main.c

PATH_TESTS		=	../../tests/tests_my_printf.c

LIB_NAME		=	my

TESTS_FILE		=	my_printf.c

all: 	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ${PATH_INCLUDE}
	make clean

unit_tests: fclean all
	gcc -o unit_tests ${TESTS_FILE} ${PATH_TESTS} --coverage \
	-lcriterion -I${PATH_INCLUDE} -L${PATH_LIB} -l${LIB_NAME}

run_tests: unit_tests
	./unit_tests
	gcovr

main: fclean all
	gcc -o main ${PATH_MAIN} -I${PATH_INCLUDE} -L${PATH_LIB} -l${LIB_NAME} \
	-l csfml-window -l csfml-graphics
	@echo -e "${_GREEN}[OK]${_END} Compiled"
	./main

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(FILES)
	clear
	@echo -e "${_GREEN}[OK]${_END} All clean"

re: fclean all
