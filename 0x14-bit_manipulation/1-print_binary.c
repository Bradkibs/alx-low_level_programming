#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted to binary of type unsigned long int
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int b, count = 0;
	unsigned long int current;

	for (b = 31; b >= 0; b--)
	{
		current = n >> b;
		if (current & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
			putchar('0');
	}
	if (!count)
		putchar('0');
}
