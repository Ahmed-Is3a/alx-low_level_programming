#include "main.h"
/**
 * more_numbers - print numbers
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j, k, a;
	char n[2];

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
			{
				a = 1;
				n[0] = ('0' + j);
				n[1] = '0';
			}
			else
			{
				a = 2;
				n[0] = '1';
				n[1] = ('0' + j % 10);
			}
			for (k = 0; k < a; k++)
				_putchar(n[k]);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
