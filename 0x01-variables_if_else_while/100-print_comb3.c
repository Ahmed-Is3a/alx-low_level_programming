#include <stdio.h>
/**
 * main - prints the numbers from 0 to 9.
 * Return: 0 always.
 *
 */
int main(void)
{
	int num, m, t;

	t = 0;
	for (num = 0 ; num < 10 ; num++)
	{
		for (m = 0 ; m < 10 ; m++)
		{
			if (num != m && m > t)
			{
				putchar('0' +  num);
				putchar('0' + m);
				if (num < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		t++;
	}
	putchar('\n');
	return (0);
}
