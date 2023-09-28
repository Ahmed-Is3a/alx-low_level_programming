#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * factorial - function discription
 * @n: varaible discription.
 *
 * Return: always 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
