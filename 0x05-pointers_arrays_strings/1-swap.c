#include "main.h"

/**
 * swap_int - swap
 *
 * @a: number
 * @b: number
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
