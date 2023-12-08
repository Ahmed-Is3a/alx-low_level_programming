#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to retrieve (starting from 0).
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	/* Traverse the list */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

    /* Check if the index is valid */
	if (i == index && current != NULL)
		return (current);

	/* Node at the specified index does not exist */
	return (NULL);
}

