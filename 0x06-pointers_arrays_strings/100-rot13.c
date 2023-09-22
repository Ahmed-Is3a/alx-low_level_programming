#include "main.h"
/**
 * rot13 -  encodes a string into 1337. leet
 *
 * @c: charactor.
 * Return: Always 0.
 */

#include <stdio.h>
#include <stdlib.h>

char *rot13(char *c)
{
	char *p;
	char base;

	p = c;

	for (; *c != '\0'; ++c)
	{
		if ((*c >= 'A' && *c <= 'Z') || (*c >= 'a' && *c <= 'z'))
		{
			if (*c >= 'a')
				base = 'a';
			else
				base = 'A';
			*c = ((*c - base + 13) % 26) + base;
		}
	}

	return (p);
}

