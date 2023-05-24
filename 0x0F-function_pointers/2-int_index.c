#include <stddef.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: array to manipulate
* @size: number of elements in the array
* @cmp: pointer to the function to compare values
* Return: index of the first element
* for which the cmp function does not return 0
* If no element matches, return -1
* If size <= 0, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for ( ; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
