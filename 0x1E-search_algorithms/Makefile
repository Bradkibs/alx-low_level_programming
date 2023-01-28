CC = gcc
SRC = 1-binary.c 1-main.c
OBJ = $(SRC:.c=.o)
NAME = b
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
.PHONY: clean betty
all: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)
betty:
	betty *.c
clean:
	$(RM) $(OBJ)
