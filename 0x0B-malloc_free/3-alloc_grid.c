#include <stdlib.h>
/**
 * alloc_grid - Creates a 2-D integer grid.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to a 2-D integer grid.
 */
int **alloc_grid(int width, int height)
{
	int row, col;
	int **grid;

	row = col = 0;
	if (height < 1)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(int));
		if (grid[row] == NULL)
		{
			for (col = 0; col < row; col++)
				free(grid[col]);
			free(grid);
			return (NULL);
		}

		for (col = 0; col < width; col++)
			grid[row][col] = 0;
	}

	return (grid);
}
