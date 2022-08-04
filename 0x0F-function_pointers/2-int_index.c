#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the pointer to the array
 * @size: the size of the array
 * @cmp: a pointer to the function the compares the values
 * Return:returns the index of the first element for which the cmp func does
 * not return 0. if no element matches return -1 and if size <= 0 return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	for (; size > 0;size--)
	{
		if (cmp(array[i]) != 0)
				return (i);
		else
			i++;
	}
	return (-1);
	
}
