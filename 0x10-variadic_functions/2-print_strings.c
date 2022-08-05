#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings passed in to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *str;

	va_list ap;

	va_start(ap, n);
	if (separator)
	{
		for (i = 0; n > i; i++)
		{
			str = va_arg(ap, char *);
			if (!str)
			{
				str = "(nil)";
				printf("%s", str);
			}
			else
			{
				printf("%s", str);
				if ((n - 1) > i)
					printf("%s ", separator);
			}
		}
		printf("\n");
	}
	va_end(ap);
}
