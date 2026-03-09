#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplique une chaine de caracteres
 * @str: la chaine de caractere à copier
 *
 * Return: (tab) pour afficher la copie de str
 */

char *_strdup(char *str)
{
	char *tab;
	unsigned int i = 0;

	if (str == NULL)
	return (NULL);

	else
	{
		while (str[i] != '\0')
		{
			i++;
		}
	}

	tab = malloc((i + 1) * sizeof(char));

	if (tab == 0)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		tab[i] = str[i];
	}
	tab[i] = '\0';

return (tab);
}
