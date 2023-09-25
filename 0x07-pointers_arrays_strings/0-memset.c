#include "main.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @s: memory area.
 * @b: constant byte.
 * @n: int
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (p);
}
