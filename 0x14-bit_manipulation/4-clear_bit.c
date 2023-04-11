#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @index: index starting from 0 of the bit you want to set
 * @n: pointer to the number to be set
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
