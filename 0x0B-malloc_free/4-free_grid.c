#include "main.h"

/**
 * free_grid - frees a 2D grid previously created by alloc_grid function
 * @grid: pointer to the 2D grid to free
 * @height: height of the grid
 *
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
