#include <stdio.h>
/**
 * main - Entry point which prints the size of various types
 * Return: 0 when successful
 *
 */
int main(void)
{	printf("Size of a float is: %d byte(s)\n", sizeof(float));
	printf("Size of a char is: %d byte(s)\n", sizeof(char));
	printf("Size of an int is: %d byte(s)\n", sizeof(int));
	printf("Size of a long int is: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int is: %d byte(s)\n", sizeof(long long int));
	return (0);
}
