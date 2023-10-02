#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * is_num - check if  a char is number
 *
 * @s: string
 *
 * Return: 1 or 0
*/
int is_num(char *s)
{
	int i;

	for (i = 0; (i < s[i]) != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
		}
	}
	return (0);

}

/**
 * main - check the code
 *
 * @argc: argc
 * @argv: argv
 *
 * Write a program that adds positive numbers.
 *
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 * You can assume that numbers and the addition of all
 * the numbers can be stored in an int
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (is_num(argv[i]))
			{
				printf("Error\n");
				return (1);
			}

			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
		}

		printf("%d\n", sum);
	}

	return (0);
}
