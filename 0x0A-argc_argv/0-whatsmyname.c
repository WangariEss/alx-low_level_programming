#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of the file
 * @argc: size of argv
 * @argv: size of the array
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
