CC = gcc
SRC = 4-main.c 2-key_index.c 0-hash_table_create.c 1-djb2.c 3-hash_table_set.c 4-hash_table_get.c
OBJ = $(SRC:.c=.o)
NAME = e
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
