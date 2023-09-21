#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string -  encodes a string into 1337. leet
 *
 * @c: charactor
 * Return: Always 0.
 */

char *cap_string(char *c)
{
	int i;
	char sep[] = "\t \n,;.!?\"(){} ";
	char *p = c;

	while (*c != '\0')
	{
		for (i = 0; i < 14; i++)
		{
			if (*c == sep[i])
			{
				c++;
				if (isalpha(*c))
					*c = toupper(*c);
				c--;
			}
		}
		c++;
	}
	return (p);
}




