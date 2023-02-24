#include "main.h"

/**
 * print_numbers - prints numbers 0-9, followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}

