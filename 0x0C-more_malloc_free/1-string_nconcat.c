#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 * @n: int
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l, l2;
	char *a, *ptr;

	l = l2 = 0;
	if (s1 != NULL)
	{
	for (i = 0; s1[i] != '\0'; i++)
		l++;
	}
	a = malloc(sizeof(*a) * (n + l + 1));
	ptr = a;
	if (a == NULL)
		return (NULL);
	for (i = 0; s2[i] != '\0'; i++)
	{
		l2++;
		if (l2 == n)
			n = l2;
	}
	if (s1 != NULL)
	{
	for (i = 0; s1[i] != '\0'; i++)
	{
		*a = s1[i];
		a++;
	}
	}
	if (s2 != NULL)
	{
	for (i = 0; i < n; i++)
	{
		*a = *s2;
		s2++;
		a++;
	}
	}
	*a = '\0';
	return (ptr);
}
