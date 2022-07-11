#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @*a: integer containing the address of the first input
 * @*b: integer containing the address of the second input
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
