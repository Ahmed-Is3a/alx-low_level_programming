#include <stdio.h>
#include "main.h"

/**
 * print_numbers - printing alphabets.
 *
 * Return: no value
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
