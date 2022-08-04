#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    print_numbers(NULL, 4, 4, 5, 9, 98);
    print_numbers("*", 4, 48, 89, 0, 88);
    return (0);
}
