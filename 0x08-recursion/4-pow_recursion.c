#include "main.h"

/**
* _pow_recursion - returns x power y
* @x: the base number
* @y: the exponent number
* Return: x power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
