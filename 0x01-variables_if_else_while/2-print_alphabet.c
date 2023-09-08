#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
 * Return: 0 always.
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char ch;

	for(ch = 'a' ; ch <= 'z' ; ch++) {
	putchar(ch)
	}
	return (0);
}
