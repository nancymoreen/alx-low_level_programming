#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to fill in the array
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *d;

	if (size == 0)
		return (NULL);

	d = (char *)malloc(size * sizeof(char));

	if (d == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
	{
		d[n] = c;
	}

	return (d);
}
