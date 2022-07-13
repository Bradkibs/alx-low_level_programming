#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer of type character to the destination
 * @src: pointer of type char to the source
 * Return: character
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		continue;
	}
	for (j = 0; *(src + j) != '\0'; j++)
	{
		continue;
	}
	while (j > k)
	{
		*(dest + i + k) = *(src + k);
		k++;
	}
	*(dest + i + k) = '\0';
	return (dest);
}
