#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sums of the diagonals
 * @a: the arrays
 * @size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				sum1 += *((a + i * size) + j);
			}
			if ((j + i) == (size - 1))
			{
				sum2 += *((a + i * size) + j);
			}
		}
	}
	printf("%i, %i\n", sum1, sum2);
}
