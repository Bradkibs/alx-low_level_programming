#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: stores the number of arguments passed in
 * @argv: an array of pointers containing arguments passed in
 * Return: 0 when succesfull
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argc > i; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
