#include "main.h"
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
	unsigned int i, sum;

	sum = 0;
	i = 0;
	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		sum = sum << 1;
		if (b[i] == '1')
			sum = sum + 1;

		if (!(b[i] == '0' || b[i] == '1'))
			return (0);

		i++;
	}
	return (sum);
}
