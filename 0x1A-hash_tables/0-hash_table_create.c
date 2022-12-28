#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of the array
 * Return: a pointer to a newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_ht = malloc(sizeof(hash_table_t));

	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (new_ht == NULL)
	{
		free(new_ht);
		return (NULL);
	}
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;
	new_ht->size = size;
	free(new_ht);
	return (new_ht);
}
