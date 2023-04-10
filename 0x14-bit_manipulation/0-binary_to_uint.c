#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: Converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int x;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);

		x = 2 * x + (b[n] - '0');
	}

	return (x);
}
