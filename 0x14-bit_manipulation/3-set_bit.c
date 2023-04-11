#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @index: Is the index starting from 0 of the bit you want to set
 * @n: pointer to index
 * Return: 1 on success, or -1 on erreo
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
