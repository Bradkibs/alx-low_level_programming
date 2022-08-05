#include "variadic_functions.h"

/**
 * print_numbers - prints numbers  then followed by a new line
 * @separator: a string printed between numbers
 * @n:number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	
	unsigned int i;

	va_start(ap, n);
	if (!separator || n > 40000)
		return;
	for (i = 0; n - 1 > i; i++)
	{
		printf("%d%s ", va_arg(ap, int), separator);
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
