#include <stdio.h>
#include <stdlib.h>

/**
 * main - adding two numbers
 * @argc: size of array
 * @argv: array passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (i > 0)
		{
			if (atoi(argv[i]) == 0)
			{
				return (printf("Error\n"), 1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
