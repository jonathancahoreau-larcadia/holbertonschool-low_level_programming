#include "main.h"
#include <stdio.h>
/**
 * cap_string - maj sous conditions
 * @str: le pointeur sur un char
 *
 * Return: l'adresse contenant la valeur
 */

char *cap_string(char *str)
{
	char *ptr = str;

	if (*ptr >= 'a' && *ptr <= 'z')
	{
		*ptr = *ptr - 32;
	}
	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '	' || *ptr == '\n' || *ptr == ',' ||
			*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
			*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			if (*(ptr + 1) >= 'a' && *(ptr + 1) <= 'z')
			{
				*(ptr + 1) = *(ptr + 1) - 32;
			}
		}
	ptr++;
	}
return (str);
}
