#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a linked list
 * @head: pointer of the first node
 * Return: Sum, or 0
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
