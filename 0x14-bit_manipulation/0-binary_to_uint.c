#include "main.h"

/**
 * binary_to_uint - converts binary numbers to unsigned int
 * @b: a pointer to the string containing the binary numbers
 * Return: the converted numbers or 0 if b is null or if there is a non 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	if (b)
	{
		int i, j = 1, k = 0;
		unsigned int sum = 0;

		for (i = 0; *(b + i) != '\0'; i++)
			continue;
		while (*b)
		{
			if (*b != '0' && *b != '1')
				return (0);
			else
			{
				if (*b == '1')
				{
					while (i > (k + 1))
					{
						j *= 2;
						k++;
					}
					k = 0;
					sum += j;
					j = 1;
					i--;
					b++;
				}
				else
				{
					i--;
					b++;
				}
			}
		}
		return (sum);
	}
	return (0);
}
