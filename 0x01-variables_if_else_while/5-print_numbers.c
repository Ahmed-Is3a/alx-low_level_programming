#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the numbers from 0 to 9.
 * Return: 0 always.
 *
 */
int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
