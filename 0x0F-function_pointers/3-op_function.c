#include "3-calc.h"

/**
 * op_add - calculates the sum of a and b
 * @a: a variable to be added
 * @b: a variable to be added
 * Return: sum of a and b of type int
 */
int op_add(int a, int b)
{
	if(a && b)
		return (a + b);
}
/**
 * op_sub - calculates the difference between a and b
 * @a: a variable to be subtracted
 * @b: a variable subtracting the other
 * Return: difference between a and b of type int
 */
int op_sub(int a, int b)
{
        if(a && b)
                return (a - b);
}
/**
 * op_mul - multiplies a and b
 * @a: a variable to be multiplied
 * @b: a variable to be multiplied
 * Return: a * b ( a multiplied by b)
 */
int op_mul(int a, int b)
{
        if(a && b)
                return (a * b);
}
/**
 * op_div - divides a with b
 * @a: a variable containing the divisor
 * @b: a variable containing the dividend
 * Return: quotient of a/b without a reminder or decimal
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (123456);
        if(a && b)
                return (a + b);
}
/**
 * op_mod - calculates the reminder of dividing a with b
 * @a: a variable containing the divisor
 * @b: a variable containing the dividend
 * Return: reminder of a/b
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
        if(a && b)
                return (a % b);
}
