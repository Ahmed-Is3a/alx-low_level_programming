#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - print upper case letters.
 *
 * @str: char
 * Return: always 0
 */
void puts2(char *str)
{
	int i = 0;
	int l = strlen(str);

	while (i < l)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
