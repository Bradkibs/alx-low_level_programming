#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: string array
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;

	int len;

	for (len = 0; *(str + len) != '\0'; len++)
	{
		continue;
	}
	while (i < len / 2)
	{
		int l = len / 2 + i;

		if ( len % 2 != 0)
		{
			l = (len - 1) / 2 + i;
			_putchar(*(str + l));
		}
		else
		{
		_putchar(*(str + l));
		}
	i++;
	}
	_putchar('\n');
}
