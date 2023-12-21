#include "hash_tables.h"


/**
 * hash_table_create - a function that creates a hash table.
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 * If something went wrong, your function should return NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int i;

	h_table = malloc(sizeof(hash_node_t));
	h_table->size = size;
	h_table->array = calloc(h_table->size, sizeof(hash_node_t));

	for (i = 0; i < h_table->size; i++)
		h_table->array[i] = NULL;

	return (h_table);
}
