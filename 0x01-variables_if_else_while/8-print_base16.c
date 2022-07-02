#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0 when successful
 *
 */
int main(void)
{
	char ch = '0';

	char Ch = 'a';

	while (ch <= '9')
	{	putchar(ch);
		ch++;
	}
	while (Ch <= 'f')
	{	putchar(Ch);
		Ch++;
	}
	putchar('\n');
	return (0);
}
