#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: contains the number of command line args
 * @argv: contains the command line args passed in
 * Return: 0 when succesfull and return 1 when there is an error
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
		{
		char err[] = "Error";

		printf("%s\n", err);
		return (1);
		}
	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);
	return (0);
}
