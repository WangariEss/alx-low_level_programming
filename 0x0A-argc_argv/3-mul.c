#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two arguments
 * @argc: size of array argument
 * @argv: the array arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num1, num2, product;

	if (argc != 3)
	{
		return (printf("Error\n"), 1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	product = num1 * num2;

	printf("%d\n", product);
	return (0);
}
