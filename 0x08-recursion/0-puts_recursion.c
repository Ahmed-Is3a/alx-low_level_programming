#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - function discription
 * @s: varaible discription.
 *
 * Return: always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
