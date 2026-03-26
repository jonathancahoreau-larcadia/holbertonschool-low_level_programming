#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - ajout d'un noeud en fin de chaîne
 * @head: pointeur sur pointeur qui retourne l'adresse du head
 * @str: pointeur qui renvoie une chaine de caractere.
 *
 * Return: (NULL) si probleme memoire, (new) l'adresse du noeud ajouté
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *new;

	tmp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
		if (str == NULL)
		{
			free(new);
			return (NULL);
		}
	new->len = strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}
