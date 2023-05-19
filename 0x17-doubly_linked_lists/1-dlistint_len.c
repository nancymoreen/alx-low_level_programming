#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a doubly linked list
 * @h: head of the doubly linked list
 * Return: Count of the elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count_p = 0;

	while (h)
	{
		h = h->next;
		count_p++;
	}
return (count_p);
}
