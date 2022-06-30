#include <stdio.h>
/**
 * main - Entry point which prints the size of various types
 * Return: 0 when successful
 *
 */
int main(void)
{	printf("The size of float is: %d byte(s)\n", sizeof(float));
	printf("The size of char is: %d byte(s)\n", sizeof(char));
	printf("The size of int is: %d byte(s)\n", sizeof(int));
	printf("The size of long int is: %d byte(s)\n", sizeof(long int));
	printf("The size of long long int is: %d byte(s)\n", sizeof(long long int));
	return (0);
}
