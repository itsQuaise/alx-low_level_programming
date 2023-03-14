#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - a function tat frees two dimensionalgrid
 * @grid: takes in width
 * @height: height of grid
 * REturn: free grid
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
