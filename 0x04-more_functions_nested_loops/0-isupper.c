#include <ctype.h>

/**
 * _isupper - print upper case letters.
 *
 * @c: char
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
