#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - check the code.
 *
 * @width: width
 * @height: height
 *
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = (int **)malloc(sizeof(int *) * width);
	ptr = a;
	if (a == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		a[i] = (int *)malloc(sizeof(int) * height);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			a[i][j] = 0;
	}

	return (ptr);
}
