#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: the pointer to the name printed
 * @f: a function pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
	(*f)(name);
}
