#include "main.h"

/**
 * _strdup - a function that returns a pointer to a new allocated space
 * in memory which contains a copy of the string given as a parameter
 * @str: a pointer to the character to be copied
 * Return: a pointer  to the newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *dup;

	int i, j = 0;

	while (*(str + j))
		j++;
	j++;
	dup = malloc(sizeof(char) * j);
	if (dup == NULL || str == NULL)
	{
		free(dup);
		return (NULL);
	}
	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(dup + i) = *(str + i);
	}
	return (dup);

}
