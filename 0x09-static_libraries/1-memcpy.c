#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: destination of type pointer to a character
 * @src: source of type pointer to a character
 * @n: an unsigned integer
 * Return:type pointer to a character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (n > i)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
