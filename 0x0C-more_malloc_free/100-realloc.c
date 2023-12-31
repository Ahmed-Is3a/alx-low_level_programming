#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, size;
	void *p;

	if (new_size < old_size)
		size = new_size;
	else
		size = old_size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	
	p = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		((char *)p)[i] = ((char *)ptr)[i];
	}

	free(ptr);

	return (p);
}
