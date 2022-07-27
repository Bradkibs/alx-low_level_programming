#include "main.h"

/**
 * create_array - creates an array of chars and initializes it
 * with a specific char
 * @size: the number of characters in an array created
 * @c: the character to be initialized
 * Return: pointer to the array or null if size is 0 or it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	unsigned int i;

	p = malloc(sizeof(c) * size);
	if (p == NULL || size == 0)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		*(p + i) = c;
	}
	return (p);
	free(p);

}
