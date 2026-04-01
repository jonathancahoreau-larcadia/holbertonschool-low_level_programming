#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - pointeur sur fonction sur une structure
 * @head: double pointeur
 * @n: un entier
 *
 * Return: (new) l'adresse du nouveau noeud.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = (*head);

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
return (new);
}
