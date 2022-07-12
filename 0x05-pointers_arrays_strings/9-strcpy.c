#include "main.h"

/**
 * _strcpy - copies string pointed to bey the src inlcluding '\0' to the buffer
 * @dest: pointer which is of character type
 * @src: pointer which is the source
 * Return: a pointer to destination of character type
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);

}
