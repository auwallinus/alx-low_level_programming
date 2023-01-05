#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value pair should
 * 	       be stored in array in array of a hash table.
 * @key: The key to get the index of.
 *
 * Description: Uses the djb2 algorith.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djbe(key) % size);
}
