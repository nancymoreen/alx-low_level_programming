#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node from a doubly-linked list
 * @head: pointer to the head of the list
 * @index: the index of the node
 * Return: If the node does not exist, return NULL.
 * Otherwise, return a pointer to th node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index && head)
		return (get_dnodeint_at_index(head->next, index - 1));

	return (head);
}
