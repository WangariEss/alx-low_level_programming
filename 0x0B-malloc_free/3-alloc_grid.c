#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - return a two dimentional array
 * @width: the width
 * @height: the height
 *
 * Return: a two dimentional array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(height * sizeof(int *));

	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
	}
	if (arr != NULL)
	{
		return (arr);
	}
	return (NULL);
}
