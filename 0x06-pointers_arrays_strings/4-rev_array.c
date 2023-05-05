#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: an array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, new_array;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			new_array = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = new_array;
		}
	}
}
