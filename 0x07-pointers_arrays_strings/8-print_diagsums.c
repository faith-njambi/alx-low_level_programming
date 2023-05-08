#include <stdio.h>
#include "main.h"

/**
* print_diagsums - prints the sum of the two diagonals
* @a: the array
* @size: size of the array
* Return: success
*/
void print_diagsums(int *a, int size)
{
	int i;
	int sum_lr = 0, sum_rl = 0;

	for (i = 0; i < size; i++)
	{
		sum_lr += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum_rl += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum_lr, sum_rl);
}
