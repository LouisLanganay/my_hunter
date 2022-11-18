##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

include Makefile_colors.mk

PROJECT_FILES = 	src/functions/create_window.c		\
					src/functions/destroy_window.c		\
					src/functions/move_rect.c			\
					src/events/close_window.c			\
					src/events/handle_events.c			\
					src/events/mouse_click.c			\
					src/functions/check_arguments.c		\
					src/functions/game_events.c			\

SRC	=	lib/my/my_compute_power_rec.c		\
		lib/my/my_compute_square_root.c	\
		lib/my/my_contain_alpha.c		\
		lib/my/my_find_prime_sup.c		\
		lib/my/my_getnbr.c			\
		lib/my/my_isneg.c			\
		lib/my/my_is_prime.c			\
		lib/my/my_putchar.c			\
		lib/my/my_putchar_error.c		\
		lib/my/my_put_nbr.c			\
		lib/my/my_put_nbr_float.c		\
		lib/my/my_strcontain.c		\
		lib/my/my_putstr.c			\
		lib/my/my_putstr_error.c		\
		lib/my/my_revstr.c			\
		lib/my/my_showmem.c			\
		lib/my/my_showstr.c			\
		lib/my/my_sort_int_array.c		\
		lib/my/my_strcapitalize.c		\
		lib/my/my_strcat.c			\
		lib/my/my_strcmp.c			\
		lib/my/my_strcpy.c			\
		lib/my/my_str_isalpha.c		\
		lib/my/my_str_islower.c		\
		lib/my/my_str_isnum.c			\
		lib/my/my_str_isprintable.c		\
		lib/my/my_str_isupper.c		\
		lib/my/my_strlen.c			\
		lib/my/my_strlowcase.c			\
		lib/my/my_strncat.c			\
		lib/my/my_strncmp.c			\
		lib/my/my_strncpy.c			\
		lib/my/my_strstr.c			\
		lib/my/my_str_to_word_array.c		\
		lib/my/my_strupcase.c			\
		lib/my/my_swap.c			\
		lib/my/sum_numbers.c			\
		lib/my/sum_strings_length.c		\
		lib/my/disp_stdarg.c			\
		lib/my/my_nbrlen.c			\
		lib/my/my_put_unsignednbr.c		\
		lib/my/my_unsignednbrlen.c		\
		lib/my/my_putnbr_base.c		\
		lib/my/my_printf.c			\
		lib/my/my_put_address.c		\
		lib/my/my_putnbr_base_long.c		\
		lib/my/my_put_nbr_scientific.c		\
		lib/my/my_e_or_f_flag.c		\
		lib/my/my_put_nbr_long.c		\
		lib/my/printf/c.c			\
		lib/my/printf/di.c			\
		lib/my/printf/f.c			\
		lib/my/printf/modulo.c			\
		lib/my/printf/s.c			\
		lib/my/printf/u.c			\
		lib/my/printf/x.c			\
		lib/my/printf/o.c			\
		lib/my/printf/p.c			\
		lib/my/printf/n.c			\
		lib/my/printf/e.c			\
		lib/my/printf/b.c			\
		lib/my/printf/g.c

CFLAGS 			+= -g

OBJ				=	$(SRC:.c=.o)

NAME			=	libmy.a

FILES			=	$(shell find . \( -name '*~' 	\
					-o -name '*.gcda' -o -name '*.gcno'		\
					-o -name 'unit_tests' -o -name 'my_hunter' \) )

PATH_INCLUDE	=	includes

PATH_LIB		=	.

PATH_MAIN		=	./src/main.c

PATH_TESTS		=	../../tests/tests_my_printf.c

LIB_NAME		=	my

TESTS_FILE		=	my_printf.c

all: 	$(NAME)

$(NAME): fclean	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp ./lib/my/my.h ${PATH_INCLUDE}
	make clean
	make main

unit_tests: fclean all
	gcc -o unit_tests ${TESTS_FILE} ${PATH_TESTS} --coverage \
	-lcriterion -I${PATH_INCLUDE} -L${PATH_LIB} -l${LIB_NAME}

run_tests: unit_tests
	./unit_tests
	gcovr

main:
	gcc -o my_hunter ${PATH_MAIN} \
	${PROJECT_FILES} -I${PATH_INCLUDE} -L${PATH_LIB} -l${LIB_NAME} \
	-l csfml-window -l csfml-graphics -l csfml-system -l csfml-audio
	@echo -e "${_GREEN}[OK]${_END} Compiled"

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(FILES)
	clear
	@echo -e "${_GREEN}[OK]${_END} All clean"

re: fclean all

.SILENT:
