#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - will frees the grid previously created
 * @grid: the pointer to the pointer of integers
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
