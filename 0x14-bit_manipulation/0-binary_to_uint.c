#include "main.h"
#include <math.h>
#include <string.h>

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 *
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 *	there is one or more chars in the string b that is not 0 or 1
 *	b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, k, l, sum, po;
	double j;

	j = 0;
	sum = 0;
	po = 1;

	l = strlen(b);
	/* printf("l = %d\n", l); */
	i = 0;
	if (b == NULL)
		return (0);

	for (i = l; i > 0;)
	{
		i--;
		j++;
		if (b[i] == '1' || b[i] == '0')
		{
			if (b[i] == '1')
			{
				po = 1;

				for (k = 1; k < j; k++)
				{
					po = po * 2;
				}
				sum = sum + po;
			}
		}
		else
			return (0);

		/* printf("d: %c ,", b[i]); */

	}

	return (sum);
}
