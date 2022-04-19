##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile to compile the lib
##

SRC =	fonctions/my_putchar.c		\
		fonctions/my_putstr.c		\
		fonctions/add_char.c		\
		fonctions/count_char.c		\
		fonctions/my_split.c		\
		fonctions/my_strlen.c		\
		fonctions/my_strncpy.c		\
		fonctions/next_char.c		\
		fonctions/get_content.c		\
		fonctions/write_error.c		\
		fonctions/my_realloc.c		\
		fonctions/free_str_tab.c 	\
		fonctions/free_int_tab.c 	

NAME =	libmy.a

OBJ	=	$(SRC:.c=.o)

CFLAGS = -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
