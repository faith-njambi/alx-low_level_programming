#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char toprint = 'a';

	while (toprint <= 'z')
	{
		if (toprint != 'e' && toprint != 'q')
		{
			putchar(toprint);
		}
		toprint++;
	}
	putchar('\n');
	return (0);
}
