#include "main.h"

/**
 * set_string - sets the value of a pointer to a character
 * @s: pointer to a pointer of the source
 * @to: pointer to the destination
 * Return:nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
