#include <stdio.h>

/**
 * main - prints alphabet in lowercase except q and e
 *
 * Return: 0 when successful
 *
 */
int main(void)
{	char ch;

	for (ch = 97; ch <= 122; ch++)
		if (ch != 101 && ch != 113)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
