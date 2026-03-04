#include "main.h"
/**
 * _strcmp - compare 2 caractère dans une chaine différente
 * @s1: un caractere
 * @s2: un caractere
 *
 * Return: renvoie la polarité entre deux caractère
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 != '\0' && *s2 != '\0'))
	{	s1++;
		s2++;
	}
return (*s1 - *s2);
}
