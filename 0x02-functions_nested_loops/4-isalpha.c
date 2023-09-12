#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - printing alphabets.
 *
 * @c: a charactor.
 *
 * Return: no value
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
