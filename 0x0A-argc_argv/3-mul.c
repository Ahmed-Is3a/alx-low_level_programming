#include "main.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * @argc: argc
 * @argv: argv
 *
 * Write a program that multiplies two numbers.
 *
 * Your program should print the result, followed by a new line
 * You can assume that the two numbers and result can be stored in an integer
 * If the program does not receive two arguments,
 * your program should print Error, followed by a new line, and return 1
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a * b;
	printf("%d\n", sum);

	return (0);
}
