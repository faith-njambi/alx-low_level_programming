#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers
* @min: lowest integer
* @max: highest integer
* Return: pointer to the created array
* NULL if min > max
* NULL on function fail
*/
int *array_range(int min, int max)
{
	int *myarray;
	int length;
	int j;

	if (min > max)
	{
		return (NULL);
	}
	length = (max - min) + 1;
	myarray = (int *)malloc(sizeof(int) * length);
	if (myarray == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < length; j++)
	{
		myarray[j] = min++;
	}
	return (myarray);
}
