#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * leet -  encodes a string into 1337. leet
 *
 * @c: charactor
 * Return: Always 0.
 */

char *leet(char *c)
{
	char list[] = "aAeEoOtTlL";
	char map[] = "4433007711";
	int i;
	char *p = c;

	while (*c != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*c == list[i])
				*c = map[i];
		}
		c++;
	}
	return (p);
}



