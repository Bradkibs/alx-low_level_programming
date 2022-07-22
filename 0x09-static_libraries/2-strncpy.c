#include "main.h"

/**
 * _strncpy - copies a string from src to dest
 * @src: the source pointer to the variable copied which is of type character
 * @dest: the character destination pointer to the variable storing the string
 * @n: number of characters int he string to be copied of type integer
 * Return: a character type
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	while (n > j)
	{
		if (*(src + j) == '\0')
		{
			*(dest + j) = *(src + j);
			break;
		}
		else
		{
			*(dest + j) = *(src + j);
		}
		j++;
	}
	return (dest);
}
