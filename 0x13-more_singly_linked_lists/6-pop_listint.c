#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: pointer to first node
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int x;

	if (*head == NULL)
		return (0);

	x = (*head)->n;
	ptr = (*head);
	*head = (*head)->next;

	free(ptr);

	return (x);
}
