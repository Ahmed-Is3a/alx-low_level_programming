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
	int i = 0;
	char sep[] = " \t\n,;.!?\"(){}";
	b = p;

	while (*p != '\0')
	{
		for (i = 0; i < 13; i++)
		{


			if (*p == sep[i])
			{
				p++;
				*p = toupper(*p);
				p--;
			}
		}
		p++;
	}
	return (b);
}

