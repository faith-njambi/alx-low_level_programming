#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings
* @separator: string to be printed between strings
* @n: number of strings passed to the function
* Return: Success
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *string;

	va_start(list, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char*);
		if  (string == NULL)
			string = "(nil)";

		printf("%s", string);
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
