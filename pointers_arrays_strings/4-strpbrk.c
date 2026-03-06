#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - place le pointeur sur un caractere recherché
 * @s: est la chaine à analyser
 * @accept: sont les caracteres à chercher
 *
 * Return: (ref) renvoie la chaine pointé sur le
 * 1er caractere trouvé ; (NULL) si rien
 */

char *_strpbrk(char *s, char *accept)
{
	char *ref = s;
	char *comp = accept;

	for (ref = s; *ref != '\0'; ref++)
	{
		for (comp = accept; *comp != '\0'; comp++)
		{
			if (*comp == *ref)
			return (ref);
		}
	}
return (NULL);
}
