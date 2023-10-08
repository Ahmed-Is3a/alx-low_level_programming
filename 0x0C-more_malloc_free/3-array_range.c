#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: min
 * @max: max
 * Return: the pointer to the newly created array
 *	If min > max, return NULL
 *	If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arr, *ptr;

	size = max - min + 1;
	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (size));
	ptr = arr;
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (size); i++)
	{
		arr[i] = min;
		min++;
	}

	return (ptr);
}
