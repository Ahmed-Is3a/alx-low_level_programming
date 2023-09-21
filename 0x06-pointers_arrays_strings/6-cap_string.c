#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - check the code
 *
 * @p: pointer
 * Return: Always 0.
 */
char *cap_string(char *p)
{
	char *b;

	b = p;

	while (*p != '\0')
	{
		if (*p == ' ' || *p == '\n' || *p == ',' || *p == '.' || *p == '\t')
		{
			p++;
			*p = toupper(*p);
		}
		else
			p++;
	}
	return (b);
}

