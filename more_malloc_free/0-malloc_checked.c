#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - fonction pour verif malloc
 * @b: un entier
 *
 * Return: (ptr) si malloc différent de null
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	exit(98);

return (ptr);
}
