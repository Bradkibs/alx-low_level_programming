CC = gcc
SRC = 1-djb2.c 1-main.c
OBJ = $(SRC:.c=.o)
NAME = a
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
all: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)
.PHONY: re clean oclean fclean betty
clean:
	$(RM) *~  $(NAME)
oclean:
	$(RM) $(OBJ)
fclean: clean oclean
re: oclean all
betty:
	betty *.c
valgrind:
	valgrind ./a
