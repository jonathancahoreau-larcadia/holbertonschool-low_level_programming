#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - formule pour attribuer une clé
 * @key: pointeur sur un char
 * @size: pointeur sur un entier toujours positif
 *
 * Return: (index) retoune la clé indexée
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int index = 0;
	unsigned long int hash = 0;

	hash = hash_djb2(key);
	index = hash % size;
return (index);
}
