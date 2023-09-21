#include "main.h"
#include <stdio.h>

/**
 * _strncpy - check the code
 *
 * @dest: destination
 * @src: source
 * @n: number
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (dest_start);
}

