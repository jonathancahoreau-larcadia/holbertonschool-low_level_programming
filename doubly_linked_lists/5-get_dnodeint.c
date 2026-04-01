#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - cherche un noeud grâce à un index
 * @head: pointeur sur l'adresse de head
 * @index: nombre de noeuds à parcourir
 * Return: (node) retourne le noeud sur l'index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (node == NULL)
			return (NULL);

		node = node->next;
	}
return (node);
}
