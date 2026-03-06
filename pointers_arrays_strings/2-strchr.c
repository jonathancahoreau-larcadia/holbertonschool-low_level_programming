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
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
		if (c == '\0')
		{
			return (s);
		}
	return (NULL);

}
