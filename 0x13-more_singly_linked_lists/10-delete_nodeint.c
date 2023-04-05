#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: head pointer to first node
 * @index: index of the node that should be deleted
 * Return: 1 at success, -1 at failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *curr = NULL;
	unsigned int d = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (d < index - 1)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
		d++;
	}

	curr = ptr->next;
	ptr->next = curr->next;
	free(curr);

	return (1);
}
