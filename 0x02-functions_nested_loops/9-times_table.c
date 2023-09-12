#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * times_table - printing alphabets.
 *
 * Return: no value
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			if (n < 10)
			{
				_putchar('0' + n);
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
