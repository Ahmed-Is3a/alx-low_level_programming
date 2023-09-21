#include "main.h"
#include <stdio.h>

/**
 * _strcat - check the code
 *
 * @dest: destination
 * @src: source
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*d != '\0')
		d++;
	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}


