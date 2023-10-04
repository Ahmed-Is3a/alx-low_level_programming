#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code.
 *
 * @s1: string
 * @s2: string
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *str1;
	char *ptr;

	while (s1[i] != '\0')
		i++;
	while (s2[i] != '\0')
		i++;

	str1 = (char *)malloc(sizeof(char) * (i + 1));
	ptr = str1;
	if (str1 == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; *s1 != '\0'; i++)
		{
			*str1 = *s1;
			s1++;
			str1++;
		}
	}
	if (s2 != NULL)
	{
		for (i = 0; *s2 != '\0'; i++)
		{
			*str1 = *s2;
			s2++;
			str1++;
		}
	}
	*str1 = '\0';
	return (ptr);


}
