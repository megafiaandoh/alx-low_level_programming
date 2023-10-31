#include "main.h"
#include <stdlib.h>

/**
 * free_grid - func. that frees previous grid created
 * @height: height of grid
 * @grid: two dimenentional array to be freed
 */

void free_grid(int **grid, int height)
{
	int prime = 0;

	while (prime < height)
	{
		free(grid[prime]);
		prime++;
	}
	free(grid);
}
