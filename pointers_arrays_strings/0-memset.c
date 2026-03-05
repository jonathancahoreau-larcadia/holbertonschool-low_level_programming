#include "main.h"
/**
 * _memset - remplace la valeur de la memoire par une autre valeur
 * @s: pointeur vers la memoire qui attribue une valeur
 * @b: est la chaine de caractere que l'on utilise pour remplacer
 * @n: entier positif pour remplacer n fois
 *
 * Return: la racine ptr de la chaine
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
return (ptr);
}
