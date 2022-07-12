#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: integer containing pointer of integer arrays
 * @n: integer containing number of arrays
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if ((i + 1) == n)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}
