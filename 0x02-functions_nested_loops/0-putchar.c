#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * main - print string using _ptuchar function
 *
 * Return: always 0.
 */
int main(void)
{
	int i;
	char s[] = "_putchar\n";

	for (i = 0; i < 9; i++)
	{
		_putchar(s[i]);
	}
	return (0);
}
