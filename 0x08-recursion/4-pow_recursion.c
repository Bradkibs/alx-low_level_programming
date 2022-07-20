#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @y: the exponent of x
 * @x: the number to be multiplied y times
 * Return: the answer in integer format
 * Example:
 * _pow_recursion(3,2) --> 3**2 = 9
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0 || x == 1 || x == 0)
		return (1);
	return (x * _pow_recursion(x, y-1));
	
}
