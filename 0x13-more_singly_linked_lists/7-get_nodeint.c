#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: head
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node
 *	NULL if node do not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	if (tmp == NULL)
		return (NULL);

	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp);
}

