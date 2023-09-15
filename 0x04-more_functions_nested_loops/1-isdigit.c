#include <ctype.h>

/**
 * _isdigit - check if c is a digit
 *
 * @c: char
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
