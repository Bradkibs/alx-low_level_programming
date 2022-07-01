#include <stdio.h>

/**
 * main - returns numbers in lowercase
 *
 * Return:0 when successful
 *
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{	putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
