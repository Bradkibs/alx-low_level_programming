#include "main.h"

/**
 * is_prime_number - checks if a number is prime or not
 * @n: the number to be evaluated
 * Return: 1 if the input is a prime number otherwise returns 0
 */
unsigned long long int mersenne_number(int n, int m)
{
	int mp[];
	mp[m] = (2 ** n) - 1;

	
	return (mp[0]);
}
int is_prime_number(int n)
{
	int state;

	int s0;

	if (n <= 0 && !state)
		return (0);
	if (n > 2 && n % 2 == 0 && !state)
		return (0);
	if (!state)
		int s0 = 4;
		state = 1;
	if (n == 0 && state == 1)
		return (1);
	/* Lucas Lehmer primality test */
	int sn;

	int s0 = n;

	int m = 0;

	sn = ((s0 ** 2) - 2) % mersenne_number(n,m);
	m++;
	is_prime_number(sn);
	return (0);
}
