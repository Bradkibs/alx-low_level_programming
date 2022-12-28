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
	hash_table_t *new_ht = malloc(sizeof(hash_table_t));

	if (!new_ht)
		return (NULL);
	new_ht->size = size;
	free(new_ht);
	return (new_ht);
}
