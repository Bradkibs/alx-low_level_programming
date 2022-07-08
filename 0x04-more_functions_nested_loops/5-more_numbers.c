#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14
 *
 * Return: nothing
 *
 */
void more_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		int c;

		for (c = 0; c < 15; c++)
		{
			if (c >= 10)
			{
				_putchar((c / 10) + 48);
			}
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
		n++;
	}
}
