#include "main.h"

/**
 * _strncat - concatenates two strings using n bytes from the source
 * @dest: pointer to the destination of type character
 * @src: pointer to the source of type character
 * @n: number of bytes of type integer
 * Return: a character type
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	while (*(dest + j) != '\0')
	{
		j++;
	}
	while (n > k)
	{
		if (*(src + k) == '\0')
		{
			*(dest + j + k) = *(src + k);
			break;
		}
		else
		*(dest + j + k) = *(src + k);
		k++;
	}
	return (dest);
}
