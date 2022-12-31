CC = gcc
SRC = 2-key_index.c 2-main.c 1-djb2.c
OBJ = $(SRC:.c=.o)
NAME = c
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
