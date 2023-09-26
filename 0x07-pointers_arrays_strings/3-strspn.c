#include "main.h"
#include <stdio.h>

/**
 * _strspn - locate a charactor
 * @s: memory area.
 * @accept: char
 *
 * Return: pointer.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = 0;
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				n++;
				continue;
			}
		}
		if (*s != *accept && n > 0)
			break;
		s++;
		accept++;
	}

	return (n);
}
