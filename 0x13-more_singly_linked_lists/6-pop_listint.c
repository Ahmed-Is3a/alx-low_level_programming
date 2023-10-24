#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list,
 *
 * @head: head
 *
 * Return: the head node’s data (n)
 *	0 if empty
*/
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;
	
	if (*head == NULL)
		return (0);

	new = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = new;
	return (n);
}