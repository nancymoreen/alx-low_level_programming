#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @head: pointer to the first node
 * @n: data for new element
 * Return: Address of new element, or NULL at failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *ptr = *head;

newnode = malloc(sizeof(listint_t));

if (!newnode)
	return (NULL);

newnode->n = n;
newnode->next = NULL;

if (*head == NULL)
{
	*head = newnode;
	return (newnode);
}

while (ptr->next)
ptr = ptr->next;

ptr->next = newnode;

return (newnode);
}
