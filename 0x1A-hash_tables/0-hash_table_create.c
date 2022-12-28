#include <stdio.h>
#include <stdlib.h>
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
	hash_node_t **node = malloc(sizeof(hash_node_t *) *size);

	if (!new_ht || !node)
		return (NULL);
	for (i=0; i < size; i++)
		node[i] = NULL;
	new_ht->array = node;
	new_ht->size = size;
	free(new_ht);
	free(node);
	return (new_ht);
}
