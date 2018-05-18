##
## EPITECH PROJECT, 2018
## lingo
## File description:
## Makefile
##

CC	=	gcc

NAME	=	lingo

SRC_DIR	=	$(realpath ../src/)

SRC_FIL	=	main.c \
		parse_file.c \
		word_choice.c \
		game_loop.c \

SRC	=	$(addprefix $(SRC_DIR)/, $(SRC_FIL))

TEST_DIR	=	$(realpath ./src/)

TEST_FIL	=	test_line-valid.c \

TEST_SRC	=	$(addprefix $(TEST_DIR)/, $(TEST_FIL))

OBJ	=	$(SRC:%.c=%.o) \
		$(TEST_SRC:%.c=%.o)

LIB	=	-lcriterion -lgcov -lcoverage

INCLUDE	=	$(realpath ../include/)

CFLAGS	=	-Wall -Wextra -I $(INCLUDE)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(TEST_OBJ) $(LIB)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

debug:	CFLAGS	+=	-g
debug:	re
