#include "main.h"
#include <stdio.h>
/**
 * _strstr - localise une sous-chaîne
 * @haystack: chaîne à analyser
 * @needle: sous-chaîne à localiser
 *
 * Return: pointeur vers le début de la sous-chaîne localisée,
 * ou NULL si non trouvée
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			break;
		}
		if (needle[j] == '\0')
		return (haystack + i);
	}
return (NULL);
}
