#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - créer un tableau
 * @size : un entier représentant la taille
 * @c: un caractere
 *
 * Return: () le tableau
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n = size;
	unsigned int i;
	char *tab;

	if (size == 0)
	return (NULL);

	tab = malloc(n * sizeof(char));

	if ((tab) == 0)
	return (NULL);

	for (i = 0; i < n; i++)
	{
		tab[i] = c;
	}
return (tab);
}
