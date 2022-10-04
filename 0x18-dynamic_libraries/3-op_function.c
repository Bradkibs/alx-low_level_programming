#include "3-calc.h"

/**
 * add - calculates the sum of a and b
 * @a: a variable to be added
 * @b: a variable to be added
 * Return: sum of a and b of type int
 */
int add(int a, int b)
{
	if(a && b)
		return (a + b);
}
/**
 * sub - calculates the difference between a and b
 * @a: a variable to be subtracted
 * @b: a variable subtracting the other
 * Return: difference between a and b of type int
 */
int sub(int a, int b)
{
        if(a && b)
                return (a - b);
}
/**
 * mul - multiplies a and b
 * @a: a variable to be multiplied
 * @b: a variable to be multiplied
 * Return: a * b ( a multiplied by b)
 */
int mul(int a, int b)
{
        if(a && b)
                return (a * b);
}
/**
 * div - divides a with b
 * @a: a variable containing the divisor
 * @b: a variable containing the dividend
 * Return: quotient of a/b without a reminder or decimal
 */
int div(int a, int b)
{
	if (b == 0)
		return (123456);
        if (a && b)
                return (a / b);
}
/**
 * mod - calculates the reminder of dividing a with b
 * @a: a variable containing the divisor
 * @b: a variable containing the dividend
 * Return: reminder of a/b
 */
int mod(int a, int b)
{
	if (b == 0)
		return (-1);
        if(a && b)
                return (a % b);
}
