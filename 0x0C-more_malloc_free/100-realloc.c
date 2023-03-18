#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size in bytes for ptr
 * @new_size: size in bytes of the new memory block
 * Return: pointer to the newly allocated memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	char *optr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
			return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	nptr = malloc(new_size);
	if (!nptr)
		return (NULL);

	optr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			nptr[i] = optr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			nptr[i] = optr[i];
	}

	free(nptr);
	return (nptr);
}
