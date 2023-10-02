/**
 * Write a program that prints all arguments it receives.
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
*/

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	
	
	return (0);
}