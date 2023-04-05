#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: head pointer to the first node
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *nxtnode;

	prevnode = 0;
	nxtnode = (*head);

	while (nxtnode != 0)
	{
		nxtnode = nxtnode->next;
		(*head)->next = prevnode;
		prevnode = (*head);
		(*head) = nxtnode;
	}
	(*head) = prevnode;

	return (*head);
}
