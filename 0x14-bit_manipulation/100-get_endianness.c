#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endisn
 *	   1 if littile endian
*/
int get_endianness(void)
{
	int a = 0x10123420;
	char *p = (char *) &a;

	if ((*p == 0x20))
		return (1);
	else
		return (0);
}
