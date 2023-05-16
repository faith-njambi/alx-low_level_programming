#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars
* @size:size of the array
* @c: specified character
* Return: NULL if size = 0
* pointer to the array or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *myarray;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	myarray = (char *)malloc(size * sizeof(char));
	if (myarray == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		myarray[i] = c;
	}
	return (myarray);
	free(myarray);
}
