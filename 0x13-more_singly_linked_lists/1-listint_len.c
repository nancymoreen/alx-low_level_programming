#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: linked list
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
