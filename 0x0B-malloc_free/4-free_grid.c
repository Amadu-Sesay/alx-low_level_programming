#include  "main.h"
#include <stdlib.h>

/**
  * free_grid - allocate a grid, make space and free space
  *@grid: take the width of the grid
  *@height: height of the grid
  *Return: free grid
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
