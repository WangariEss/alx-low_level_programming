#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_numbers - counting the size of an intefer
 * @n: the integer
 * Return: counter
 */

int count_numbers(int n)
{
	int counter = 0;

	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

/**
 * main - adds positive numbers
 * @argc: size of the array
 * @argv: the array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int size = count_numbers(atoi(argv[i]));

		if (atoi(argv[i]) > 0 && size == (int)strlen(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			return (printf("Error\n"), 1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
