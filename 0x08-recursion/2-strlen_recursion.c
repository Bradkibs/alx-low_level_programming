#include "main.h"

/**
 * _strlen_recursion - returns the length of the string
 * @s: pointer to the string
 * Return: an integer which is the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	if (*(s + 1) == '\0')
	{
		return (1);
	}
	return (1 + _strlen_recursion(s + 1));
}
