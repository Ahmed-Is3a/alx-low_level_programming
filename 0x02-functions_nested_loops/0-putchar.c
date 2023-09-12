#include <unistd.h>
#include <stdio.h>

int _putchar(char);
/**
 * main - print string using _ptuchar function
 *
 * Return: always 0.
 */
int main(void)
{
	char s[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(s[i]);
	}
	return 0;
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
