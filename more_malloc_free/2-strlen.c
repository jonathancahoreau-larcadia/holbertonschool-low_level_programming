#include "main.h"

/**
*_strlen - calcul la longeur d'une chaine
*@s: est une chaine de caractère
*
*Return: renvoie le nombre de boucles jusqu'au caractère de fin '\0'
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	i++;
	return (i);
}
