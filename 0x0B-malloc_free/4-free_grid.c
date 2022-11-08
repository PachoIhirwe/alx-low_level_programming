#include "main.h"

/**
 * free_grid - alloacates grid
 * @grid: taks width of a grid
 * @height: height of a grid
 * Return: free g
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
