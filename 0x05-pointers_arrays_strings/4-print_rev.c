#include "main.h"

/**
 * print_rev - prints strings in reverse followed by a new line
 * @s: character
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i + 1) != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
