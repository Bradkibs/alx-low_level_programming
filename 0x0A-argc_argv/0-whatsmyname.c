#include "main.h"
#include <stdio.h>
/**
 * main - prints its name
 * @argc: number of items in argv
 * @argv: a string pointer to command line arguments including the function
 * Return: 0 always
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
