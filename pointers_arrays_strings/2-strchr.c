#include "main.h"
#include <stdio.h>

/**
 * _strchr - cherche un caractere/ affiche la chaine a partir de ce caractere
 * @s: chaine d'origine
 * @c: lettre de recherche
 *
 * Return: (s) la chaine à afficher ; null si pas de correspondance
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = (s + i);
			return (s);
		}
	}
return (NULL);
}
