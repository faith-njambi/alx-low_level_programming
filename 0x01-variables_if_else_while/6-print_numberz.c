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
	int nums;

	for (nums = 0; nums < 10; nums++)
		putchar(nums + '0');

	putchar('\n');
	return (0);
}
