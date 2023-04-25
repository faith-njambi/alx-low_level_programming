#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet
 * @c: this is the character being checked
 *
 * Return: 1 if character is an alphabet, lower & uppercase or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
