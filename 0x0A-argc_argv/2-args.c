#include <stdio.h>

/**
 * main - print all arguments passes one after another
 * @argc: argument count
 * @argv: array passes
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
