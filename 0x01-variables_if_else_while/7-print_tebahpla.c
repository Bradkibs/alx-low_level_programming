#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 *
 * Return: 0 when successful
 *
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
