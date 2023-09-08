#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
 * Return: 0 always.
 *
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
