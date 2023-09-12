#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - printing alphabets.
 *
 * Return: no value
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
