#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first node
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 * Return: Address of the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int d;
	listint_t *newnode;
	listint_t *ptr = *head;

newnode = malloc(sizeof(listint_t));

if (!newnode || !head)
	return (NULL);

newnode->n = n;
newnode->next = NULL;

if (idx == 0)
{
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

for (d = 0; ptr && d < idx; d++)
{
	if (d == idx - 1)
	{
		newnode->next = ptr->next;
		ptr->next = newnode;
		return (newnode);
}
else
ptr = ptr->next;
}

return (NULL);
}
