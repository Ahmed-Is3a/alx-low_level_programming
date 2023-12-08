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
	dlistint_t *current, *new_node;
	unsigned int i = 0;

	current = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* initialize the new node*/
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	/* If the new node is to be inserted at the beginning */
	if (idx == 0)
	{
		new_node->next = current;
		if (current != NULL)
			current->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

    /* Check if the index is valid */
	if (i == idx - 1 && current != NULL)
	{
		new_node->next = current->next;
		new_node->prev = current;
		if (current->next != NULL)
			current->next->prev = new_node;

		current->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
