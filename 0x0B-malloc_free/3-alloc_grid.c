#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - check the code for ALX School students.
 *
 * @width: width
 * @height: height
 *
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a = (int **)malloc(sizeof(int *) * (width));
	int **ptr = a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
		a[i] = (int *)malloc(height * sizeof(int));

	/*Note that arr[i][j] is same as *(*(arr+i)+j) */
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			a[i][j] = 0; /*OR *(*(arr+i)+j) = 0 */
	}


	return (ptr);
}
