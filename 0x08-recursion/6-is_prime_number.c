#include "main.h"

/**
* is_prime_number - checks if the integer is a prime number
* @n: input
* Return: 1 if n is prime otherwise 0
*/
int is_prime_number(int n)
{
	int divisor = n / 2;

	if (n <= 1)
		return (0);
	return (check_prime(n, divisor));
}

/**
 * check_prime - checks if n is prime
 * @divisor: reference number
 * @n: number to check
 * Return: 1 if n is prime
*/
int check_prime(int n, int divisor)
{
	if (divisor <= 1)
		return (1);
	else if (n % divisor == 0)
		return (0);
	return (check_prime(n, divisor - 1));
}
