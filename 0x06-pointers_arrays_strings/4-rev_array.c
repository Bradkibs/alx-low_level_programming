#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer type containing a pointer to the first number of the array
 * @n: number of elements in a n array of type integer
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp1, temp2, l, i = 0;

	if (n %2 != 0)
		l = (n - 1) / 2;
	else
		l = n / 2;
	while (l > 0)
	{
		temp1 = a[i];
		temp2 = a[n - 1];
		a[i] = temp2;
		a[n - 1] = temp1;
		l--;
		i++;
		n--;
	}
}
