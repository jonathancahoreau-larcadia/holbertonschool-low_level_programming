#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copie la vzleur de la memoire n fois
 * @dest: pointeur sur chaine de char
 * @src: pointeur sur élément à copier
 * @n: nombre de copies
 *
 * Return: (dest)renvoie l'adresse du pointeur sauvegardé en dbt de ligne
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
return (dest);
}
