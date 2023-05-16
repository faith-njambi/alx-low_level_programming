#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - returns pointer to a 2-D array of integers
* @width: first element of the grid
* @height: second element of the grid
* Return: NULL on failure
* NULL if width or height is 0 or negative
*/
int **alloc_grid(int width, int height)
{
	int **myarray;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	myarray = malloc(height * sizeof(int *));
	if (myarray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		myarray[i] = malloc(width * sizeof(int));
		if (myarray[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(myarray[i]);
			free(myarray);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			myarray[i][j] = 0;

	return (myarray);
}
