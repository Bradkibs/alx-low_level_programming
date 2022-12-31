#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key
 * @key: the key to be hashed
 * @size: size of the hash tables created
 * Return: the index value of which the key is to be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
