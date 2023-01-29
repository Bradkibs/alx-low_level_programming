#include "main.h"
/**
 *print_alphabet_x10 - prints lowercase alphabet a-z 10 times
 * c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
int b = 0;

while (b < 10)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;

}
_putchar('\n');
b++;

}
}
