#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - produces a random number and prints if it is positive or negative
 *
 * Return: 0 when successful
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{	printf("%i is zero\n", n);
	}
	else
	{
	if (n < 0)
	{	printf("%i is negative\n", n);
	}
	else
	{	printf("%i is positive\n", n);
	}
	}
	return (0);
}
