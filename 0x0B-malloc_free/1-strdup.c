#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code for ALX School students.
 *
 * @str: string
 *
 * Write a function that returns a pointer to a newly allocated space
 * in memory,
 *  which contains a copy of the string given as a parameter.
 *
 * The _strdup() function returns a pointer to a new string which is
 * a duplicate of the string str. Memory for the new string is obtained
 * with malloc,
 *  and can be freed with free.
 * Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 *  It returns NULL if insufficient memory was available
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int i;
	char *s = (char *)malloc(sizeof(char) * 100);
	char *ptr = s;

	if (str == NULL)
		return (NULL);

	if (s == NULL)		/* sigfualt problem */
		return (NULL);

	for (i = 0; *str != '\0'; i++)
	{
		*s = *str;
		s++;
		str++;
		if (i == 100)
			return (NULL);
	}
	return (ptr);

}
