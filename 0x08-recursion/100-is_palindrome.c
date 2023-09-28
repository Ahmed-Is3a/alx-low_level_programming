#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _strlen_recursion - function discription
 * @s: varaible discription.
 *
 * Return: n.
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));

}

/**
 * pal_check - function discription
 * @s: varaible discription.
 * @i: int
 * @len: int
 *
 * Return: always 0.
 */
int pal_check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (pal_check(s, i + 1, len - 1));
}

/**
 * is_palindrome - prime number calculation
 *
 * @s: string
 *
 * Return: 0
*/
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_check(s, 0, _strlen_recursion(s)));

}


