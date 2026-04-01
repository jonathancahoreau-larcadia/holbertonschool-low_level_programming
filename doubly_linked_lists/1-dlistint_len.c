#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - affiche le nombre d'éléments dans une liste.
 * @h: pointeur sur structure constante
 *
 * Return: (i) le nombre d'éléments
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t i = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
return (i);
}
