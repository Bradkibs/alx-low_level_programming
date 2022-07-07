#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: integer
 * Return: 1 when if uppercase or 0 when lowercase
 *
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
