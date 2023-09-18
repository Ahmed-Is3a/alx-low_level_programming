#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - print upper case letters.
 *
 * @str: char
 * Return: always 0
 */
void puts_half(char *str)
{
	int i = 0;
	int l = strlen(str);

	if (l % 2 == 0)
		i = l / 2;
	else 
	{
		l--;
		i = l / 2;
	}
	while (i < l)
	{	
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
