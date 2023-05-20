#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node from a doubly-linked list
 * @head: pointer to the head of the list
 * @index: the index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *old, *prev;

	if (!head)
		return (-1);

	old = *head;

	if (!old)
		return (-1);

	if (index)
	{
		prev = old;

		while (--index && prev->next)
			prev = prev->next;

		if (index)
			return (-1);

		old = prev->next;

		if (!old)
			return (-1);

		prev->next = old->next;

		if (prev->next)
			prev->next->prev = prev;
	}
	else
	{
		*head = old->next;

		if (*head)
			(*head)->prev = NULL;
	}
	free(old);

	return (1);
}
