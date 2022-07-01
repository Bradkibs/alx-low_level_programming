#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - checks for the last number
 *
 * Return: 0 when successful
 *
 */
int main(void)
{
	int n;
	int lst_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lst_digit = n % 10;

	if (lst_digit == 0)
	{	printf("Last digit of %i is %i and is 0", n, lst_digit);
	}
	else
	{
	if  (lst_digit > 5)
	{	printf("Last digit of %i is %i and is greater than 5", n, lst_digit);
	}
	else
	{	printf("Last digit of %i is %i and is less than 6 and not 0", n, lst_digit);
	}
	}
	return (0);
}
