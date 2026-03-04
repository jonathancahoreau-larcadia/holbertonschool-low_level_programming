#include "main.h"
#include <stdio.h>
/**
 * leet - code 1337
 * @s: le pointeur sur char
 *
 * Return: renvoie l'adresse contenant la valeur
 */
char *leet(char *s)
{
	char *pt = s;
	char lettre[] = "aAeEoOtTlL";
	char nombre[] = "4433007711";
	int i = 0;

	while (*pt != '\0')
	{
		for (i = 0; lettre[i] != '\0'; i++)
		{
			if (*pt == lettre[i])
			{
				*pt = nombre[i];
			}
		}
	pt++;
	}
return (s);
}
