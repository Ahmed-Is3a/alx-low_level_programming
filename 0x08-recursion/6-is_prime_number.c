#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * prime - prime number calculation
 *
 * @x: int
 * @i: int
 *
 * Return: 0
*/
int prime(int x, int i)
{
	if (x <= 1)
		return (0);

	if (x == 2)
		return (1);

	if (x % i == 0)
		return (0);

	if (i * i > x)
		return (1);

	return (prime(x, i + 1));
}

/**
 * is_prime_number - function discription
 *
 * @n: varaible discription.
 *
 * Return: 0 or 1.
 */
int is_prime_number(int n)
{
	return (prime(n, 2));

}
