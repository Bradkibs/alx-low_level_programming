#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * 	  -the two digits must be different 
 * 	  -01 and 10 are considered the same combination of the two digits 0 and 1
 *
 * Return: 0 when succesful
 *
 */
int main(void)
{
	int ones = 1;
	int tens = 0;

	while (tens <= 9)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			if ( ones > tens)
			{
				putchar(tens + '0');
				putchar(ones + '0');
				putchar(',');
				putchar(' ');
			}
		}
		tens++;
	}
	putchar('\n');
	return (0);
}
