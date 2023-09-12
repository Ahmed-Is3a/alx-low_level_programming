#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - printing alphabets.
 *
 * Return: no value
 */
void print_alphabet(void)
{
	int i;
	char s[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 27; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
