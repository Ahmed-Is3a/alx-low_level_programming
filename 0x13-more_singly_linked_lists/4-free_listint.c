#include "lists.h"

/**
 * free_listint - Write a function that frees a listint_t list.
 *
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *current_node = head;

	if (head == NULL)
		return;

	while (current_node != NULL)
	{
		listint_t *next = current_node->next;

		free(current_node);

		current_node = next;
	}
}
