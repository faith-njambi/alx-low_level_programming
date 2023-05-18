#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory for an array
* @nmemb: number of elements in the array
* @size: number of bytes for each element
* Return: NULL if nmemb or size is 0
* NULL if malloc fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *myarray;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	myarray = (char *)malloc(nmemb * size);
	if (myarray == 0)
	{
		return (NULL);
	}
	return (myarray);
	free(myarray);
}
