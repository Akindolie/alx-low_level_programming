#include "main.h"
#include <stdlib.h>
/**
 * free_grid -  Frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: Pointer to grid to free
 * @height: Height of grid
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; i++)
		free(grid[index]);
	free(grid);
}
