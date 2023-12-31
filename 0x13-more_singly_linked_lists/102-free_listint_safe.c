#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 *
 * @h: head
 *
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int d;
	listint_t *tmp;

	if (*h == NULL)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

