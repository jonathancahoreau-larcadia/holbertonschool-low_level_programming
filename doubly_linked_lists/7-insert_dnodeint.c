#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert un noeud dans une double chaine
 * @h: est un pointeur sur un pointeur qui pointe sur l'adresse de h
 * @idx: un index pour insérer le noeud
 * @n: un entier pour renseigner la valeur du noeud à insérer
 *
 * Return: (node) renvoie le noeud dans main, (NULL) si erreur
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp = *h;
	dlistint_t *end = *h;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (*h == NULL)
	{
		*h = node;
		return (node);
	}
	if (idx == 0)
	{
		node->next = *h;
		node->prev = NULL;
		(*h)->prev = node;
		*h = node;
	return (node);
	}
	for (i = 0; i < idx && tmp != NULL; i++)
		tmp = tmp->next;
	if (tmp == NULL)
	{
		while (end->next != NULL)
			end = end->next;
		end->next = node;
		node->prev = end;
		node->next = NULL;
	return (node);
	}
	node->next = tmp;
	node->prev = tmp->prev;
	tmp->prev->next = node;
	tmp->prev = node;
return (node);
}
