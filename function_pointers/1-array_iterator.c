#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - tableau d'itération
 * @array: pointeur sur tableau
 * @size: la taille du tableau
 * @action: le pointeur qui appelle une fonction
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		unsigned int i = 0;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
