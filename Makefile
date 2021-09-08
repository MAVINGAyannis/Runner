##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	./game/my_runner.c	\
		./my_runner.h	\
		./game/natural_move.c	\
		./game/set.c		\
		./game/lose.c	\
		./initial/init.c	\
		./initial/init_2.c	\
		./game/movement.c	\
		./music/music.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC) -Wall -Wextra -lcsfml-graphics -lcsfml-audio -lcsfml-window -I include -o $(NAME) -g

clean:
	rm game/*.o
	rm initial/*.o
	rm music/*.o

fclean: clean
	rm $(NAME)

re:	all
	make clean
