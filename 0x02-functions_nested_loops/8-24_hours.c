#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * jack_bauer - printing alphabets.
 *
 * Return: no value
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0' + 0);
				_putchar('0' + i);
			}
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			_putchar(':');
			if (j < 10)
			{
				_putchar('0' + 0);
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			_putchar('\n');
		}
	}
}
