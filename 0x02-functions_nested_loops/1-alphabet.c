#include <stdio.h>
#include "main.h"

int _putchar(char);
void print_alphabet(void)
{
        int i;
        char s[] = "abcdefghijklmnopqrstuvwxyz";

        for (i = 0; i < 27; i++)
        {
                _putchar(s[i]);
        }
}
/**
 * main - print string using _ptuchar function
 *
 * Return: always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
