#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: the key to be hashed to get the index of placing the value
 * @value: the value to be stored in a specific index of the hash table
 * Return: 1 on success and o otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp;
	hash_node_t *new_node;

	if (!key || !value || !ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	
	/* checking if the key exists */
	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	/* if the value exists duplicating and replacing the value */
	if (tmp != NULL)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}
	
	/* adding a new node if the key doesn't exist */
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
