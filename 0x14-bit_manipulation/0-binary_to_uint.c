#include "main.h"

/**
 * binary_to_uint - converts a binary num to an unsigned int
 * @b: pointer to a string of 0 & 1 chars
 * Return: converted number or
 *	0 if there is one or more chars in @b that is not 0 or 1
 *	0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}

	return (j);
}
