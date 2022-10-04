#include "main.h"

/**
 * _strcmp - compares two strings
 * @leftstr: a character type string pointer
 * @rightstr: a character type string pointer
 * Return: 0 if the strings are similar
 * returns negative number if rightstr > leftstr
 * returns positive number if leftstr > rightstr
 *
 */
int _strcmp(char *leftstr, char *rightstr)
{
	while (*leftstr && *leftstr == *rightstr)
	{
		++leftstr;
		++rightstr;
	}
	return ((int) (unsigned char) (*leftstr) - (int) (unsigned char) (*rightstr));

}
