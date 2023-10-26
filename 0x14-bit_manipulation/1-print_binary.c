#include "main.h"

/**
 * _power - base ** power
 *
 * @base: base
 * @power: power
 *
 * Return: power
 */
unsigned long int _power(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);
}

/**
 * print_binary -  prints the binary representation of a number
 *
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divider, value;
	char flag;

	flag = 0;
	divider = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (divider != 0)
	{
		value = n & divider;
		if (value == divider)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divider == 1)
		{
			_putchar('0');
		}
		divider >>= 1;
	}
}
