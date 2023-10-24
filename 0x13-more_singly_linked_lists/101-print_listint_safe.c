#include "lists.h"

size_t loop_list(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loop_list - Counts the number of unique nodes
 *
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t loop_list(const listint_t *head)
{
	const listint_t *N_Node, *N_N_Node;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	N_Node = head->next;
	N_N_Node = (head->next)->next;

	while (N_N_Node)
	{
		if (N_Node == N_N_Node)
		{
			N_Node = head;
			while (N_Node != N_N_Node)
			{
				nodes++;
				N_Node = N_Node->next;
				N_N_Node = N_N_Node->next;
			}

			N_Node = N_Node->next;
			while (N_Node != N_N_Node)
			{
				nodes++;
				N_Node = N_Node->next;
			}

			return (nodes);
		}

		N_Node = N_Node->next;
		N_N_Node = (N_N_Node->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = loop_list(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

