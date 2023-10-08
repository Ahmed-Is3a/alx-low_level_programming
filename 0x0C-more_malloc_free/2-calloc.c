#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Write a function that allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, s;
	void *ptr;
	unsigned char *a;

	s = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	a = ptr;
	if (a == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
	{
		a[i] = 0;
	}

	return (ptr);
}
