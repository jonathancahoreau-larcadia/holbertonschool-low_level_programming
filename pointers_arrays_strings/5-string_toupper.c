#include "main.h"
#include <stdio.h>
/**
* string_toupper - échange minuscule en maj
* @str: un pointeur vers une chaine de caractere
*
* Return: renvoie l'adresse contenant la valeur au début de la chaine
*/

char *string_toupper(char *str)
{
	char *pt = str;

	while (*pt != '\0')
	{
	if ((*pt >= 'a') && (*pt <= 'z'))
	{
		*pt = *pt - 32;
	}
	pt++;
	}
return (str);
}
