#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - check the code for ALX School students.
 *
 * @size: size
 * @c: c
 *
 * Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * Prototype: char *create_array(unsigned int size, char c);
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 *
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = (char *)malloc(sizeof(char) * size);
	char *ptr = a;

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*a = c;
		a++;
	}
	return (ptr);

}
