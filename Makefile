##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile code source
##

SRC = 	src/main.c				\
		src/get_content_file.c	\
		src/init_matrix.c		\
		src/fill_matrix.c		\
		src/maze_solver.c

NAME = solver

OBJ = $(SRC:.c=.o)

LDFLAGS = -L ./lib/ -lmy

CPPFLAGS = -I./include

CFLAGS = -Wall -Wextra

all: built $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(LDFLAGS) $(CFLAGS)

clean:
	rm -f $(OBJ)
	make -C lib/ clean

fclean: clean
	rm -f $(NAME)
	make -C lib/ fclean

re: fclean all

built:
	make -C lib/

.PHONY: all clean fclean re built
