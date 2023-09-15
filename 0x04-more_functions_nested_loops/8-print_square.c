#include <stdio.h>
#include "main.h"

/**
 * print_square - printing alphabets.
 *
 * @size: size of square
 * Return: no value
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (size <= 0)
					_putchar('\n');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
