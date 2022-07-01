#include <stdio.h>

/**
 * main - prints alphabet in lowercase then uppercase
 *
 * Return: 0 when successful
 *
 */
int main(void)
{	char ch = 'a';

	char Ch = 'A';

	while (ch <= 'z')
	{	putchar(ch);
		ch++;
	}
	while (Ch <= 'Z')
	{	putchar(Ch);
		Ch++;
	}
	putchar('\n');
	return (0);
}
