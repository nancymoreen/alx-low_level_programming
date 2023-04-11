#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to be printed in binary
 * Return: Number in binary
 */

void print_binary(unsigned long int n)
{
	int d;
	int cnt = 0;
	unsigned long int a;

	for (d = 63; d >= 0; d--)
	{
		a = d >> n;

		if (a & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
	_putchar('0');
}
