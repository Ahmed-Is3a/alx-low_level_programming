#include "lists.h"


/**
 * delete_dnodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to the address of the head of the doubly linked list.
 * @index: Index of the node to be deleted (starting from 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *temp;
	unsigned int i;

	/* Return -1 if the list is empty or the index is out of bounds */
	if (current == NULL || (index == 0 && current->next == NULL))
		return (-1);

	/* If the node to be deleted is the head */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	/* Check if the index is valid */
	if (i == index && current != NULL)
	{
		temp = current->prev;
		temp->next = current->next;
		if (current->next != NULL)
			current->next->prev = temp;

		free(current);
		return (1);
	}

	return (-1);
}
