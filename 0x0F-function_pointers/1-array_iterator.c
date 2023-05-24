#include <stddef.h>
#include "function_pointers.h"

/**
* array_iterator - executes function given as a parameter
* @array: array to manipulate
* @size: size of the array
* @action: pointer to the function
* Return: success
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
	else
		return;
}
