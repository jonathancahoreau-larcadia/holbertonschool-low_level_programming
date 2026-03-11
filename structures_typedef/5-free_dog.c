#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - libère la mémoire de la structure dog_t
 * @d: pointeur vers la structure
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	free(d->owner);
	free(d->name);
	free(d);
}
