#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * rot13 -  encodes a string into 1337. leet
 *
 * @c: charactor.
 * Return: Always 0.
 */

char *rot13(char *c)
{
	char *p = c;

	while (*c != '\0')
	{
		if (*c <= 'm' && *c >= 'a')
		{
			*c = *c + 13;
		}
		else if (*c >= 'n' && *c <= 'z')
			*c = *c - 13;
		if (*c >= 'N' && *c <= 'Z')
			*c = *c + 13;
		else if (*c <= 'M' && *c >= 'A')
			*c = *c - 13;
	}
	return (p);
}


