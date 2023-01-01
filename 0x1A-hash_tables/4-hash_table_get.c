#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with the key provided
 * @ht: The hash table for lookup
 * @key: the key whose value is to be retrieved
 * Return: the value associated with the key or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (!ht || !key || !tmp)
		return (NULL);
	while (strcmp(tmp->key, key) != 0)
	{
		if (tmp != NULL)
			tmp = tmp->next;
		else
			return (NULL);
	}
	return (tmp->value);
}
