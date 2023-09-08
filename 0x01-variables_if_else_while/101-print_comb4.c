#include <stdio.h>
/**
 * main - prints the numbers from 0 to 9.
 * Return: 0 always.
 *
 */
int main(void)
{
	int n, m, k;

	for (n = 0 ; n < 10 ; n++)
	{
		for (m = 0 ; m < 10 ; m++)
		{
			for (k = 0 ; k < 10 ; k++)
			{
				if (n < m && m < k)
				{
					putchar('0' + n);
					putchar('0' + m);
					putchar('0' + k);
					if (n < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
