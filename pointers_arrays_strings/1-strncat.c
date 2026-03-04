#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatene la deuxième chaine n caracteres
 * @dest: un caractere
 * @src: un caractere
 * @n: un entier
 *
 * Return: la valeur à l'adresse (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	char *pt = dest;

	while (*pt != '\0')
	{
		pt++;
	}
	while (*src != '\0' && n > 0)
	{
		*pt = *src;
		pt++;
		src++;
		n--;
	}
	*pt = '\0';
return (dest);
}
