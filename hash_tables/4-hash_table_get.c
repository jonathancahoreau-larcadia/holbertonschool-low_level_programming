#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - retrouve une clé
 * @ht: pointeur sur une hashtable
 * @key: pointeur sur la clé
 *
 * Return: (node->value), (NULL) si pas de clé
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}
return (NULL);
}
