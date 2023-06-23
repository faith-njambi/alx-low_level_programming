#include "main.h"

/**
 * clear_bit - set bit value to 0 at given index
 * @n: parameter
 * @index: index
 *
 * Return: 1 on success
 *	-1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
