#include "main.h"
/**
 * _strcat - concatener 2 chaines de caracteres
 * @dest: un caractere
 * @src: un caractere
 *
 * Return: renvoie l'adresse de dest
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = ('\0');

return (p);
}
