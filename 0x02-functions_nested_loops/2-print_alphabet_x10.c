#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - printing alphabets.
 *
 * Return: no value
 */
void print_alphabet(void)
{
	int i, j;
	char s[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
