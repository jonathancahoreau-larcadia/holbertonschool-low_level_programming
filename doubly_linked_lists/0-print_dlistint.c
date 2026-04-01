#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - affiche les valeurs et le nombres d'éléments
 * @h: un pointeur vers la structure de type const
 *
 * Return: (nodes) le nombre de noeuds
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t nodes = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		nodes++;
	}
return (nodes);
}
