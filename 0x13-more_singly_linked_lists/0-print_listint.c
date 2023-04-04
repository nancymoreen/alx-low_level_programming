#include "lists.h"
/**
 * print_listint - Prints all the elements of a linked list
 * @h: Linked list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;

		h = h->next;
	}
	return (x);
}
