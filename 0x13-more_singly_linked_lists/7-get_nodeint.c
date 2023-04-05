#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: pointer to the first node
 * @index: Index of the node, starting at 0
 * Return: nth node, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int d = 0;

	while (ptr && d < index)
	{
		ptr = ptr->next;
		d++;
	}
	return (ptr ? ptr : NULL);
}
