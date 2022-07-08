#include "main.h"

/**
 * print_line - draws a straight line in the terminal according to the argument number passed
 *
 * @n: integer
 *
 * Return: nothing
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; n > i; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
