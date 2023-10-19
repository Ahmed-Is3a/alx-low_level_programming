#include <stdio.h>
#include "lists.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_list - prints all the elements of a linked list
 *
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;
	char *tmp;
	int i;

	while (h)
	{
		if (!h->str)
		{
			tmp = "[0] (nil)\n";
			for (i = 0; tmp[i] != '\0'; i++)
			{
				_putchar(tmp[i]);
			}
		}
		else
		{
			_putchar('[');
			_putchar('0' + h->len);
			_putchar(']');
			_putchar(' ');
			tmp = h->str;
			for (i = 0; tmp[i] != '\0'; i++)
			{
				_putchar(tmp[i]);
			}
			_putchar('\n');
		}
		h = h->next;
		s++;
	}

	return (s);
}
