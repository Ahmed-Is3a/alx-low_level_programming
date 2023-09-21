#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the code
 *
 * @p: pointer
 * Return: Always 0.
 */
char *string_toupper(char *p)
{
	char *b;

	b = p;

	while (*p != '\0')
	{
		*p = toupper(*p);
		p++;
	}
	return (b);
}

