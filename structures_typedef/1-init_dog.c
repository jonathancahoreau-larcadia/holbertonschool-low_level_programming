#include <stdio.h>
#include "dog.h"

/**
 * init_dog - nom de la fonction
 * @d: pointe l'adresse de struct dog
 * @name: pointe sur la chaine de caractere du nom
 * @age: un float correspondant à la valeur de l'age
 * @owner: pointe sur la chaine de caractere propriétaire
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
