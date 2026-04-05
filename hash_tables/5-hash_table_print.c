#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - afficher les hashtable
 * @ht: pointeur sur la hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int virg = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			if (virg == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			virg = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
