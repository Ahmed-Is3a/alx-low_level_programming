
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 *
 * @argc: argc
 * @argv: argv
 * 
 * Write a program that prints the minimum number of coins to make change for an amount of money.
 *
 * Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
 * you should use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative, print 0, followed by a new line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 *
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	int i, n, c, tmp, result;
	int change[] = {25, 10, 5, 2, 1};

	result = 0;
	
	if (argc == 2)
		n = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		tmp = n;
		n = n % change[i];
		result += tmp / change[i];
	}
	
	printf("%d\n", result);

}