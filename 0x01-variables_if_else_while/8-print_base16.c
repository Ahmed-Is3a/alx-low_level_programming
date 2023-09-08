#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and uppercase.
 * Return: 0 always.
 *
 */
int main(void)
{
	char ch;
	int n;

	for (n = 0 ; n <= 9 ; n++)
		putchar('0' + n);
	for (ch = 'a' ; ch <= 'f' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
