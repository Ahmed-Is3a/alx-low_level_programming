#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * - function discription
 * @s: varaible discription.
 *
 * Return: always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{	
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}

