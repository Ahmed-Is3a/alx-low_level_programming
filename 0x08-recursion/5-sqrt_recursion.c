#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * sqrt_search - function discription
 *
 * varaible discription.
 * @n: int
 * @i: int
 *
 *
 * Return: always 0.
 */
double sqrt_search(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (sqrt_search(n, i + 1));

}

/**
 * _sqrt_recursion - function discription
 *
 * @n: int
 * Return: 0
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_search(n, 0));

}

