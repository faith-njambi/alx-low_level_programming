#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;
	char k = 'a';

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (i = 10; i <= 15; i++)
	{
		putchar(k);
		k++;
	}

	putchar('\n');
	return (0);
}
