#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data (n) of a linked list.
 * @head: head
 *
 * Return: sum of node
*/
int sum_dlistint(dlistint_t *head)
{

	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;

	return (sum);
}
