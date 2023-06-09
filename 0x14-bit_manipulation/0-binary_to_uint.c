#include <stddef.h>
#include "main.h"

/**
* binary_to_uint - converts binary number to unsigned int
* @b: pointer to a string of 0 and 1 chars
* Return: the converted number
* 0 if b is null or has character that is not 0 or 1
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = ((result << 1) + b[i] - '0');
	}

	return (result);
}
