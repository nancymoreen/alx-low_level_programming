#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to first node
 * Return: pointer to freed memory
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(head);
		*head = ptr;
	}
	*head = NULL;
}
