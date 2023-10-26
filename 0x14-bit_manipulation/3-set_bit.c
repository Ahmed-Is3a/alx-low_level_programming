#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: num
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_set;
	unsigned long int index_range;

	index_range = (sizeof(unsigned long int) * 8 - 1);

	if (index > index_range)
		return (-1);

	bit_set = 1 << index;
	*n = *n | bit_set;

	return (1);
}
