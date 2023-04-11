#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @index: is the index, starting from 0, of the bit you want to get
 * @n: number at index
 * Return: Value of the bit at index, 0r -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int d;

	if (index > 63)
		return (-1);

	d = (n >> index) & 1;

	return (d);
}
