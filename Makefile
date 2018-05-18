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

SRC	=	$(addprefix $(SRC_DIR)/, $(SRC_FIL))

OBJ	=	$(SRC:%.c=%.o)

INCLUDE	=	$(realpath ./include/)

CFLAGS	=	-Wall -Wextra $(INCLUDE)

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
