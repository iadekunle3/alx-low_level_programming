#include "hash_tables.h"
/**
 * key_index - is used to define the key index
 * @key: is the key used
 * @size: is the key size
 * Return: as specified
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
