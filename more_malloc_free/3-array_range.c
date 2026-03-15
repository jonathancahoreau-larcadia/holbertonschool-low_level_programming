#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - tableau de valeur croissante
 * @min: valeur minimum
 * @max: valeur max
 *
 * Return: (pt) l'adresse correspondant au tableau
 */

int *array_range(int min, int max)
{
	int *pt = NULL;
	int i;

	if (min > max)
	return (NULL);

	pt = malloc((max - min + 1) * (sizeof(int)));
	if (pt == NULL)
	return (NULL);

	for (i = 0; i <= (max - min + 1); i++)
	{
		pt[i] = (min + i);
	}
return (pt);
}
