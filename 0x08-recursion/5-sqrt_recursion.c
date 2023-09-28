#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * sqrt_search - function discription
 *
 * varaible discription.
 * @low: int
 * @high: int
 * @p: int
 *
 * Return: always 0.
 */


float sqrt_search(int low, int high, int p)
{

	if (low <= high)
	{
		int mid = (low + high) / 2;


		if ((mid * mid <= p) && ((mid + 1) * (mid + 1) > p))
		{
			return (mid);
		}

		else if (mid * mid < p)
		{
			return (sqrtSearch(mid + 1, high, p));
		}
		else
		{
			return (sqrtSearch(low, mid - 1, p));
		}
	}
	return (low);
}

/**
 * _sqrt_recursion - function discription
 *
 * @n: int
 * Return: 0
*/
int _sqrt_recursion(int n)
{
	int start = 0;
	int end = n;
	float rlt;

	if (n < 0)
		return (-1);

	rlt = sqrtSearch(start, end, end);
	if ((rlt * rlt) == n)
		return (rlt);
	else
		return (-1);

}

