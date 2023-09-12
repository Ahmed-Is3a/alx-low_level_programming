#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - printing alphabets.
 *
 * @n: a charactor.
 *
 * Return: no value
 */
int print_last_digit(int n)
{
	int b = abs(n % 10);

	return (b * 11);
}
