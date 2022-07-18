#include "main.h"

/**
 * _strchr - locates the character in a string
 * @s: pointer to the string of type character
 * @c: character to be located
 * Return: pointer to the first occurrence of c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int  i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	*(s + i) = '\0';
	return (NULL);
}
