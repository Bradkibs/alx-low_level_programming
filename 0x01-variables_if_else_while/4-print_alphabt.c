#include <stdio.h>

/**
 * main - prints alphabet in lowercase except q and e
 *
 * Return: 0 when successful
 *
 */
int main(void)
{	char ch = 'a';

	while (ch <= 'z')
	{
	if (ch != 'q' && ch != 'e')
	{
	putchar(ch);
	ch++;
	}
	}
	putchar('\n');
	return (0);
}
