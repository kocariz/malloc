##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC_DIR	=	src/
SRC_SRC	=	malloc.c	\
			free.c	\
			realloc.c	\
			calloc.c	\
			reallocarray.c

SRC	=	$(addprefix $(SRC_DIR), $(SRC_SRC))

OBJ	=	$(SRC:.c=.o)

CC 		=	gcc

RM 		=	rm -f

CFLAGS	+=	-I ./include/
CFLAGS 	+=	-fPIC
LDFLAGS =	-shared

NAME	=	libmy_malloc.so

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC)  -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all