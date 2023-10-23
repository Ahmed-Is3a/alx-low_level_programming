#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t list
 *
 * @h: list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int n = 0;

	if (h == NULL)
		return (n);
	while (h != NULL)
	{
		_putchar('0' + h->n);
		_putchar('\n');
		h = h->next;
		n++;
	}
	return (n);
}
