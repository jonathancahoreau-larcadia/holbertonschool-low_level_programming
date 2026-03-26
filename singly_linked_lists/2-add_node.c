#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
*_strlen - calcul la longeur d'une chaine
*@s: est une chaine de caractère
*
*Return: renvoie le nombre de boucles jusqu'au caractère de fin '\0'
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * add_node - pointeur sur fonction qui retourne une structure
 * @head: pointeur sur pointeur qui retourne l'adresse du head
 * @str: pointeur qui renvoie une chaine de caractere.
 *
 * Return: (NULL) si probleme memoire, (new) l'adresse du noeud ajouté
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
return (new);
}
