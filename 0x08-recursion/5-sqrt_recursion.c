#include "main.h"

/**
* _sqrt_recursion - returns natural square root of a number
* @n: input
* Return: natural square root of the number
*/
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (check_sqrt(0, n));
}

/**
* check_sqrt - returns square root of n
* @n: number to be checked
* @x: square of n
* Return: square root of n
*/
int check_sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (check_sqrt(n + 1, x));
}
