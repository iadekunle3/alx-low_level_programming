#include <stdlib.h>
#include "main.h"
/**
 * free_grid - is the function for the dimension
 * @grid: is the width of the array
 * @height: is the array
 * Return: as specified
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

