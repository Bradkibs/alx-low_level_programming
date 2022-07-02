#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0 when successful
 *
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(' ');
		putchar(num + '0');
		putchar(',');
		num++;
	}
	putchar('\n');
	return (0);
}
