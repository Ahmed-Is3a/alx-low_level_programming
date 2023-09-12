#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - printing alphabets.
 *
 * @n: a charactor.
 *
 * Return: no value
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
