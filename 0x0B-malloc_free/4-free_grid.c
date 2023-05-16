#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees a 2-D array
* @grid: address of the 2-D grid
* @height: height of the grid
* Return: success
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
