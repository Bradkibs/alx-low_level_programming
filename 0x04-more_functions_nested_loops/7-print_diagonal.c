#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: integer
 *
 * Return: nothing
 *
 */
void print_diagonal(int n)
{
	int s;

	s = n - 1;

	while (n > 0)
	{
		if (s > 0)
		{
			_putchar(32);
			s--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
	_putchar('\n');
}
