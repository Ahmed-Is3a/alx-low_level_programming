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
	for (num = 0 ; num < 100 ; num++)
	{
		for (m = 0 ; m < 100 ; m++)
		{
			if (num != m && m > t)
			{
				printf("%02d ",   num);
				printf("%02d",  m);
				if (m < 99)
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
