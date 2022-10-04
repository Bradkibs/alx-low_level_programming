#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: type character
 * @b: type character
 * @n: type unsigned integer
 * Return: type pointer to character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;

	while (a < n)
	{
		*(s + a) = b;
		a++;
	}
	return (s);
}
