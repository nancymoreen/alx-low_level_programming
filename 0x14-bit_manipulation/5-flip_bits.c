#include "main.h"

/**
 * flip_bit - Returns the number of bits you would need to flip to
 * get from one number to another
 * @n: first unsigned long int
 * @m: second unsigned long int
 * Return: Number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int d, count = 0;
	unsigned long int x;
	unsigned long int y = n ^ m;

	for (d = 63; d >= 0; d--)
	{
		x = y >> d;

	if (x & 1)
		count++;
	}

	return (count);
}
