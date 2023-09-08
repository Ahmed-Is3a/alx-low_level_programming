#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - test n and print the state of n.
 * Return: 0 always.
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n%10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n%10);
	}
	if (n%10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n%10);
	}
	if (n%10 < 6)
	{
		printf("Last digit 0f %d is %d and is less than 6 and not 0\n", n, n%10);
	}
	return (0);
}

