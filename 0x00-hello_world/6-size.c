/**
 * main :- a C program that prints the size of various types on the computer it is compiled and run on.
 * Using printf().
 * Return: vralue 0
 *
 */

#include <stdio.h>
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", );
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
