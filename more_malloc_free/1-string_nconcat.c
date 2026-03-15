#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strlen - calcul la longeur d'une chaine
*@s: est une chaine de caractère
*
*Return: renvoie le nombre de boucles jusqu'au caractère de fin '\0'
*/
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	if (_strlen == NULL)
		return (0);

	while (*s != '\0')
	{
	s++;
	i++;
	}
	return (i);
}
/**
 * string_nconcat - concat n caractere de chaine 2
 * @s1: une chaine de caractere 1
 * @s2: une chaine de caractere 2
 * @n: un entier pour indiquer le nbre de caractere
 *
 * Return: (nconcat) renvoie l'adresse de la sequence concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	unsigned int i, j, lens1, lens2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);

	if (n >= lens2)
		n = lens2;
	nconcat = malloc((lens1 + n + 1) * sizeof(char));
	if (nconcat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		nconcat[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		nconcat[i] = s2[j];
		i++;
	}
	nconcat[i] = '\0';

	return (nconcat);
}
