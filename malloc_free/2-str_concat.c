#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatene deux chaines de caracteres
 * @s1: la chaine de caractere 1
 * @s2: la chaine de caractere 2
 *
 * Return: (tab) pour afficher la chaine de caracteres concatenee
 */

char *str_concat(char *s1, char *s2)
{
	char *tab;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int n = 0;

	if (s1 == NULL)
		s1 = "";


	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	n = (i + j + 1);
	tab = malloc(n * sizeof(char));

	if (tab == 0)
		return (NULL);

	i = 0;
	j = 0;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			tab[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			tab[i] = s2[j];
			i++;
		}
	}
	tab[i] = '\0';

return (tab);
}
