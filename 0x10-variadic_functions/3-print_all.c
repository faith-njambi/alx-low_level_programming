#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: a list of arguments passed to the function
 *	c: char
 *	i: integer
 *	f: float
 *	s: char * - if string is NULL, print (nil)
 *	ignore anyother
 * Return: success
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *string;
	unsigned int i = 0;
	int checker;

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				checker = 0;
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				checker = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				checker = 0;
				break;
			case 's':
				string = va_arg(list, char*);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				checker = 0;
				break;
			default:
				checker = 1;
				break;
		}
		if (format[i + 1] != '\0' && checker == 0)
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(list);
}
