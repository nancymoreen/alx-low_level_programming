#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to a string  using malloc
 * @nmemb: number of members
 * @size: size in bytes
 * Return: pointer to allocated memory, or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, y = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	p = malloc(y);

	if (p == NULL)
		return (NULL);

	while (x < y)
	{
		p[x] = 0;
		x++;
	}
	return (p);
}
