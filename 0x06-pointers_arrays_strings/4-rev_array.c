#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code
 *
 * @a: array
 * @n: array size
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int t = 0;
	int *e;
	int *s;

	s = a;
	e = a + n - 1;

	while (s < e)
	{

		t = *s;
		*s = *e;
		*e = t;
		s++;
		e--;
	}
}

