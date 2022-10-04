#include "main.h"

/**
 * _strstr - locates the first occurence of a substring needle in haystack
 * @haystack: a string to locate occurence of a substring
 * @needle: a string used in matching its occurence
 * Return: a pointer to the beginning of the located substring or NULL if not
 * found
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, y, x;

if (needle[0] == '\0')
return (haystack);

while (haystack[i] != '\0') /* iterate through haystack */
{
if (haystack[i] == needle[0])
{

x = i, y = 0;
while (needle[y] != '\0')
{
if (haystack[x] == needle[y])
x++, y++;
	else
			break;
}
if (needle[y] == '\0')
{
	return (haystack + i);
}
}
i++;
}
return (NULL); /* No match */
}
