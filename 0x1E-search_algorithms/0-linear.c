#include <stdio.h>


/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: size of the array
 * @value: the value to search for in an array
 * Return: value if present or -1 if not present
 *
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *array);
		if (*array == value)
			return (i);
		array++;
	}
	return (-1);
}
