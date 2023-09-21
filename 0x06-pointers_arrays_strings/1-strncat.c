#include "main.h"
#include <stdio.h>

/**
 * _strncat - check the code
 *
 * @dest: destination
 * @src: source
 * @n: number
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;

	while (*d != '\0')
		d++;

	while (*src != '\0' && n > 0)
	{
		*d = *src;
		d++;
		src++;
		n--;
	}
	*d = '\0';
	return (dest);
}
