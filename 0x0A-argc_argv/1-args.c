#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int count = 0;

	while (argc--)
	{
		argv++;
		count++;
	}
	printf("%d\n", count - 1);
	return (0);
}
