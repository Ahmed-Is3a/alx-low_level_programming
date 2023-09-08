#include <stdio.h>
/**
 * main - prints the numbers from 0 to 9.
 * Return: 0 always.
 *
 */
int main(void)
{
	int num, m, t;

	for (num = 0 ; num < 10 ; num++)
	{
		for (m = 0 ; m < 10 ; m++)
		{
			t++;
			if (num != m && num > t)
			{
				putchar('0' +  num);
				putchar('0' + m);

			}
			if (num < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
