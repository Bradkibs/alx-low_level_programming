#include <stdio.h>

/**
 * binary_search - searches a sorted array of integers using binary search
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to be searched for
 * Return: index of the value or -1 if not found
 *
 */
int binary_search(int *array, size_t size, int value)
{
	int j, L, R, M;

	if (array == NULL)
		return (-1);
	L = 0;
	R = (int)size - 1;
	while (L <= R)
	{
		printf("Searching in array: ");
		for (j = L; j <= R; j++)
		{
			if (j > L)
				printf(", ");
			printf("%d", array[j]);
		}
		printf("\n");
		M = L + (R - L) / 2;

		if (array[M] < value)
			L = M + 1;
		else if (array[M] > value)
			R = M - 1;
		else
			return (M);
	}
	return (-1);
}
