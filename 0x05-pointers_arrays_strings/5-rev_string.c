#include "main.h"

/**
 * rev_string - reverses a string
 * @s: character
 * Return: nothing
 */
void rev_string(char *s)
{
	int l = 0;

	int i = 0;

	char temp;

	while (*(s + l) != '\0')
	{
		l++;
	}
	while (i < l / 2)
	{
		temp = *(s + l - i - 1);
		*(s + l - i - 1) = *(s + i);
		*(s + i) = temp;
		i++;
	}

}
