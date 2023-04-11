#include "main.h"

/**
 * get_endianness - Checks the endianness
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int d = 1;
	char *ch = (char *) &d;

	return (*ch);
}
