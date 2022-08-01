#include <stdio.h>
#include <stdlib.h>
#define __FILENAME__ (__builtin_strrchr("/"__FILE__, '/') + 1)

/**
 * main - prints the name of the file it was compiled from
 * Return: 0 when succesful
 */
int main()
{
	printf("%s\n", __FILENAME__);
	return (EXIT_SUCCESS);
}
