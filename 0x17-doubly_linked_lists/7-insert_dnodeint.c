#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: head
 * @idx: index
 * @n: number
 *
 * Return: new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node, *next_node;
	unsigned int i = 1;

	current = *h;
	next_node = (*h)->next;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Traverse the list */
	while (current != NULL && i < idx)
	{
		current = current->next;
		next_node = next_node->next;
		i++;
	}

	new_node->n = n;
    /* Check if the index is valid */
	if (i == idx && current != NULL)
	{
		new_node->next = next_node;
		new_node->prev = current;
		current->next = new_node;
		next_node->prev = new_node;
		return (new_node);
	}

	/* Node at the specified index does not exist */
	return (NULL);
}
