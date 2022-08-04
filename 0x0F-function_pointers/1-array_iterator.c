#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: the pointer to the array
 * @size: the size of the array
 * @action: the pointer to the function accepting int type argument
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && size && action)
{
	int i = 0;

	for (; size > 0; size--)
	{
		action(*(array + i));
		i++;
	}
}
}
