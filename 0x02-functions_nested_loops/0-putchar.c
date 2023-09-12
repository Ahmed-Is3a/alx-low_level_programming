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
	char s[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(s[i]);
	}
	return 0;
}
