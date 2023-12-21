#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated.
 * value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	hash_node_t *new = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	index = hash_djb2((unsigned char *)key) % ht->size;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
