#include "main.h"

/**
 * factorial - returns the factorial of the given number
 * @n: the number to be evaluated its factorial
 * Return: an integer which is the answer of the factorial to n
 * Example:
 * factorial(5); --> 5 * 4 * 3 * 2 * 1 = 120
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
