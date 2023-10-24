#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: head of the list
 * @n: int
 *
 * Return: the address of the new element,
 *	or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t *));

	if (new == NULL) /* return NULL if malloc failed */
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
