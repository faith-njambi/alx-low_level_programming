#include "main.h"

/**
 * flip_bits - returns number of bits to flip to get from one number to another
 * @n: source
 * @m: destination
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, bits_flipped = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			bits_flipped += 1;

		n = n >> 1;
		m = m >> 1;
	}

	return (bits_flipped);
}
