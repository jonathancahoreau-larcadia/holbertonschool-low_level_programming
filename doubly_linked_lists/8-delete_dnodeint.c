#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - efface les noeuds
 * @head: pointeur qui pointe sur le pointeur head
 * @index: le numéro du noeud
 *
 * Return: (-1)si echec, (1) si succes
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (-1);
	if (tmp->prev == NULL)
	{
		if (tmp->next == NULL)
		{
			*head = NULL;
			free(tmp);
		return (1);
		}
		*head = tmp->next;
		tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	if (tmp->next == NULL)
	{
		tmp->prev->next = NULL;
		free(tmp);
	return (1);
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}

