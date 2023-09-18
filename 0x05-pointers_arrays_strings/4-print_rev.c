#include "main.h"
#include <string.h>

/**
 * print_rev - print upper case letters.
 *
 * @s: char
 * Return: always 0
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
