CC = gcc
SRC = 100-jump.c 100-main.c
OBJ = $(SRC:.c=.o)
NAME = b
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -lm
.PHONY: clean betty
all: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)
betty:
	betty *.c
clean:
	$(RM) $(OBJ)
