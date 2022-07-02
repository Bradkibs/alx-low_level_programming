#include <stdio.h>

/**
 * main - prints single digit numbers of base 10
 *
 * Return: 0 when successful
 *
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
