#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - indique l'index où la fonction est vérifiée
 * @array: pointeur sur tableau
 * @size: la taille du tableau
 * @cmp: le pointeur sur fonction comparative
 *
 * Return: -1 si pas de tableau ou pas de match et l'entier i si match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{

		if (cmp(array[i]))
		return (i);

	}
return (-1);
}
