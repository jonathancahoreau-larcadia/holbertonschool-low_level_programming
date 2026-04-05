#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete - libérer la hashtable
 * @ht: pointeur sur la hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			tmp = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
