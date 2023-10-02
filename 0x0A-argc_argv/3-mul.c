/**
 * Write a program that multiplies two numbers.
 * 
 * Your program should print the result of the multiplication, followed by a new line
 * You can assume that the two numbers and result of the multiplication can be stored in an integer
 * If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
 * 
*/
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv)
{
	int sum = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	sum = argv[1] * argv[2];
	printf("%d\n", sum);
	
	return (0);
}