/**
 * main :- a C program that prints the size of various types on the computer it is compiled and run on.
 * Using printf().
 * Return: vralue 0
 *
 */

#include <stdio.h>
int main(void)
{
	long int l;
	long long int ll;
	unsigned long u;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (u)sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
