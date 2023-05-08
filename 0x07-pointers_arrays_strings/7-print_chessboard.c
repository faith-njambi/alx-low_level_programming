#include "main.h"

/**
* print_chessboard - prints the pieces of a chessboard
* @a: pointer to chess pieces
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int d, b;

	for (d = 0; d < 8; d++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[d][b]);
		}
		_putchar('\n');
	}
}
