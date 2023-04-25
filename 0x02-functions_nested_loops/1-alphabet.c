#include "main.h"

/**
 * print_alphabet - function that prints the alphabetical order
 * _putchar - will print a new line and the alphabet
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);

	_putchar('\n');
}
