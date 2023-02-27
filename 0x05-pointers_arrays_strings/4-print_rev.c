#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int d = 0;

	while (s[d] != '\0')
		d++;

	for (d = d - 1; d >= 0; d--)
		_putchar(s[d]);

	_putchar('\n');
}

