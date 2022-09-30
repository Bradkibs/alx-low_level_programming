#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string pointer
 * @s2: the second string pointer
 * Return: a pointer to a newly allocated space in mem with the concat strings
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;

	char *dup;

	if (!s1)
	{
		*s1 = '\0';
		i = 100;
	}
	if (!s2)
	{
		*s2 = '\0';
		j = 100;
	}
	if (i == 100 && j == 100)
		return ('\0');
	for (; *(s1 + i) != '\0'; i++)
		continue;
	for (; *(s2 + j) != '\0'; j++)
	       continue;
	dup = malloc(sizeof(char) * ((i + j) + 1));
	if (!dup)
		return(NULL);
	for (; (i + j) > 0; i--)
	{
		if (*(s1 + k) == '\0' || k >= i)
		{
			*(dup + k) = *(s2 + k);
			l++;
		}
		else
		{
		*(dup + k) = *(s1 + k);
		}
		k++;
	}
	*(dup + k) = '\0';
	return (dup);
}
