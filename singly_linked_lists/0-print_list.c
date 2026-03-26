#include <stdlib.h>
#include "lists.h"
/**
 * print_list - afficher la liste
 * @h: pointeur sur une structure
 *
 * Return: (i) le nombre de noeud
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	size_t i = 0;

	while (tmp != NULL)
	{
		i++;
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);

		tmp = tmp->next;
	}
return (i);
}
