#include "main.h"
/**
 * _strncpy - copy dans la destination un nombre n de caracteres
 * @dest: un caractere
 * @src: un caractere
 * @n: un entier
 *
 * Return: la valeur à l'adresse (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

		while (*src != '\0' && n > 0)
		{
			*dest = *src;
			src++;
			dest++;
			n--;
		}
		while (n > 0)
		{
			*dest = '\0';
			dest++;
			n--;
		}
return (start);
}
