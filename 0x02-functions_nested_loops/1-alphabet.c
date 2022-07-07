#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * Return: nothing  when successful
 *
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
