#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches a sorted array using jump search algorithm
 * @array: a pointer to a sorted array
 * @size: size of the array to be searched
 * @value: the value to be searched for in a list
 * Return: index of the value at the array or -1 if not found
 *
 */
int jump_search(int *array, size_t size, int value)
{
	int start, end, i;

	if (array == NULL || size == 0)
		return (-1);
	start = 0;
	end = (int)floor(sqrt(size));

	while (array[end] < value && start < end)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		printf("Value checked array[%d] = [%d]\n", end, array[end]);
		if (end < (int)size - 1)
		{
			start = end;
			end += (int)floor(sqrt(size));
		}
		else
		{
			end = size - 1;
			break;
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", start, end);
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
