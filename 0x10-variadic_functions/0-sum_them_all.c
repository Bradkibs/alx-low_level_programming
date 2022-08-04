#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: the first parameter to be sumed
 * Return: the sum of the parameters or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	unsigned int i;

	va_list ap;

	va_start(ap, n);
	if (n <= 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
