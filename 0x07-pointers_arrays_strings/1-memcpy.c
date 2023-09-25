#include "main.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @dest: memory area.
 * @src: constant byte.
 * @n: int
 * Return: s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    char *p = dest;

    for (i = 0; i < n; i++)
    {
        *dest = *src;
        dest++;
        src++;
    }

    return (p);
}
