#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @index: index you want, starting from 0
 * @n: parameter
 *
 * Return: the value of the bit at index index or
 *	-1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_to_get;

	bit_to_get = (n >> index);
	if (index > 32)
		return (-1);

	return (bit_to_get & 1);
}
