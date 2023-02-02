##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

SRC = ./src/main.c \
	  ./src/open.c \
	  ./src/my_atoi.c \
	  ./src/print_square.c \
	  ./src/gen_map.c \
	  ./src/find_square.c \
	  ./src/my_strlen_bsq.c \
	  ./src/strcat_gen.c \

OBJ = $(SRC:.c=.o)

LIB = -L ./lib/my/ -lmy

CFLAGS = -I ./include/

NAME = bsq

$(NAME): $(OBJ)
	make -C ./lib/my/
	gcc $(OBJ) -o $(NAME) $(CFLAGS) $(LIB)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make fclean -C ./lib/my/

re: fclean all

debug:	CFLAGS += -g3
debug:	re
