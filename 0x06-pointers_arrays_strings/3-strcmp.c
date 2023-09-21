#include "main.h"
#include <stdio.h>

/**
 * _strcmp - check the code
 *
 * @s1: destination
 * @s2: source
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);

}

