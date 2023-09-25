#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate a charactor
 * @s: memory area.
 * @c: char.
 *
 * Return: pointer.
 */

char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return (s);
        }
        s++;
    }
    return (NULL);
}
