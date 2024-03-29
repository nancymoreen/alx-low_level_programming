#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Lists the number of elements in a linked list
 * @h: Pointer to the list_t list
 * Return: number of elements in LL
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
