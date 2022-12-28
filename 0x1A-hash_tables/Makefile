CC = gcc
SRC = 0-hash_table_create.c 0-main.c
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
