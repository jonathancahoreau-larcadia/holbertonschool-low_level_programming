#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - somme des n des noeuds
 * @head: pointeur sur l'adresse de head
 * Return: (sum) l'addition des n des noeuds parcourus et (0) si noeuds vide.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	if (head == NULL)
		return (0);
	if (node == NULL)
		return (0);
	while (node != NULL)
	{
		sum = sum + node->n;
		node = node->next;
	}

return (sum);
}
