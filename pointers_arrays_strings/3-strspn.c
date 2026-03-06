#include "main.h"
#include <stdio.h>
/**
 * _strspn - compte le nombre de caractères acceptés
 * du début jusqu'à la fin de l'acceptation
 *
 * @s: la chaine de caracteres
 * @accept: les caractères acceptés
 *
 * Return: un entier toujours positif correspondant
 * au nombre de caracteres parcouru
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[i] == accept[c])
				break;
		}
		if (accept[c] == '\0')
		return (i);
	}
return (i);
}
