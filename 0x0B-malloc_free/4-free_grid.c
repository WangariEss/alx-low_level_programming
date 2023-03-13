#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free memory in the 2 dimentional array
 * @grid: adress of the array
 * @height: height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
