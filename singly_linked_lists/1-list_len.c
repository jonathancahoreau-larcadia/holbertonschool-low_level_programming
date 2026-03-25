#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - compte le nombre d'éléments
 * @h: un pointeur pour se déplacer
 *
 * Return: (i) le nombre d'éléments
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
return (i);
}
