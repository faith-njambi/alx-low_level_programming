#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns sum of all its parameters
* @n: number of parameters
* Return: 0 if n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;

	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum = sum + (va_arg(list, int));
	}

	va_end(list);

	return (sum);
}
