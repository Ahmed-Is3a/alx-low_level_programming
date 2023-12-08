#include "lists.h"

/**
 * get_dnodeint_at_index - add node at index,
 * @head: head
 * @index: the index
 *
 * Return: node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = head;
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
	}

	if (tmp == NULL)
		return (NULL);
	return (tmp);
}
