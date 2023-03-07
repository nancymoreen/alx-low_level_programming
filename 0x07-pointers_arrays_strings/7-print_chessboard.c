#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int n;
	int d;

	for (n = 0; n < 8; n++)
	{
		for (d = 0; d < 8; d++)
			_putchar(a[n][d]);
		_putchar('\n');
	}
}

