##
## EPITECH PROJECT, 2018
## lingo
## File description:
## Makefile
##

CC	=	gcc

NAME	=	lingo

SRC_DIR	=	$(realpath ./src/)

SRC_FIL	=	main.c \
		parse_file.c \
		word_choice.c \
		game_loop.c \
		word_comp.c \

SRC	=	$(addprefix $(SRC_DIR)/, $(SRC_FIL))

OBJ	=	$(SRC:%.c=%.o)

INCLUDE	=	$(realpath ./include/)

CFLAGS	=	-Wall -Wextra -I $(INCLUDE)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

debug:	CFLAGS	+=	-g
debug:	re
